#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={-7,-3,4,19,-2,1,23};
    int i=0,j=6,temp;
    while(i<=j)
    {   
        if(a[i]<0 && a[j]<0) 
            i+=1;
        else if(a[i]>0 && a[j]<0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i+=1;
            j-=1;
        }   
        else if(a[i]>0 && a[j]>0) 
            j-=1;
        else
        {
            ++i;
            --j;
        }

    }

    for(i=0;i<7;i++) cout<<a[i]<<"  ";
    return 0;
}