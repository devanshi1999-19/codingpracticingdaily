#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    int temp=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[4]=temp;
    for(auto x:a)
    {
        cout<<x<<" ";
    }

    return 0;
}