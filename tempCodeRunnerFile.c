#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int a[10]={1,2,3,4,5,4,5,6,7,8};
void* compare1()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5;j<10;j++)
        {
            if(a[i]==a[j])
            printf("%d ",a[i]);
        }
    }
    return NULL;
}

int main()
{
    pthread_t tid1,tid2;
    pthread_create(&tid1,NULL,compare1,(void*)NULL);
    pthread_create(&tid2,NULL,compare1,(void*)NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    pthread_exit(NULL);
    return 0;
}