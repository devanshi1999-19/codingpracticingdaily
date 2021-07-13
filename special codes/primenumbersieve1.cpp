#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    //n=10
    int a[n+1];
    for(int i=0;i<=n;i++) a[i]=1;
    a[0] = 0;
    a[1] = 0;    
    for(int i=2;i*i<=n;i++)
    {
        for(int j=2*i; j<=n;j+=i)
            a[j] = 0;
    }
    for(int i=0;i<n;i++) if(a[i]== 1) count++;

    cout<<count;

    return 0;
}