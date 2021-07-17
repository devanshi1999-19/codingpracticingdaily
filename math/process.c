#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(void)
{
    pid_t childPID;
    childPID = fork();

    if(childPID == -1)
    {
        perror("Fork failed");
        return 1;
    }
    else if(childPID==0)
    {
        printf("MY PID is %d and I am the children\n\n",getpid());
    }
    else{
        printf("MY PID is %d and I am the parent\n\n",getpid());
    }
}