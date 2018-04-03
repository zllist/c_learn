/*获取当前路径*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char buf[1024];

    if(chdir("..") == -1)
    {
        perror("chdir error\n");
        exit(1);
    }

    if(getcwd(buf,1024) == NULL)
    {
        perror("error");
        exit(1);
    }

    printf("wd =[%s]\n",buf);


    return 0;
}
