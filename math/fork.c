#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{
    fork();
    int pid = fork();
    if(fork() && fork()==0)
        printf("CHILD\n");
    else
        printf("PARENT\n");

   return 0;
}