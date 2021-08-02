#include<bits/stdc++.h>
#include<pthread.h>
using namespace std;
int c=0;
void* compare(void* arg)
{
    cout<<"Hi";
   int count=c++;
   if(count==0)cout<<"T1\n\n";
   if(count==1)cout<<"T2\n\n";
}

int main()
{
    pthread_t threads[2];
    pthread_create(&threads[0],NULL,compare,NULL);
    pthread_create(&threads[1],NULL,compare,NULL);
    pthread_join(threads[0], NULL);
    pthread_join(threads[0], NULL);
    pthread_exit(0);
    return 0;
}

