#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    int fd1,fd2,ret;
    char buf[1024];

    fd1 = open(argv[1], O_RDONLY);
    if(fd1 == -1)
    {
        printf("src open err %d\n", errno);
        exit(1);
    }

    fd2 = open(argv[2], O_WRONLY|O_CREAT, 0664);
    if(fd1 == -1)
    {
        printf("src open err %d\n", errno);
        exit(1);
    }
    /*  在这里read返回的是读到的字节数*/
    while ((ret = read(fd1,buf,sizeof(buf))) > 0)
    {
        if(ret == -1)
        {
            printf("file read err %d\n", errno);
            exit(1);
        }
        write(fd2,buf,ret);
    
    }
    ret = close(fd1);

    ret = close(fd2);
    
    return 0;
}
