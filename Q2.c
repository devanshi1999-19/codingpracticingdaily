#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int a[5]={1,2,3,4,5};
int b[5] ={4,5,7,8,9};
void* compare1()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]==b[j])
            printf("%d ",a[i]);
        }
    }
    return NULL;
}

int main()
{
    pthread_t tid1;
    pthread_create(&tid1,NULL,compare1,(void*)NULL);
    pthread_join(tid1,NULL);
    pthread_exit(NULL);
    return 0;
}