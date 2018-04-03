#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{

    pid_t pid;
    pid = fork();
    if(pid == -1)
    {
        perror("fork");
        exit(1);
    }
    else if(pid > 0){
        printf("i am parent pid =[%d], parentID =[%d]\n", getpid(),getppid());
    }
    else if(pid == 0){
        sleep(2);
        printf("i am child\n");
        execl("/bin/ls", "ls", "-l", NULL);
        exit(1);
    }
    printf("---finish...[%d]\n", getpid());
    return 0;
}
