#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int sum=0;
        for(int i=0;i<n;i++)
        {
                sum+=a[i];
        }
        int count=0;
        while(sum>0)
        {
            count++;
            sum=sum/2;
        }
        cout<<count<<"\n";
    }
    return 0;
}