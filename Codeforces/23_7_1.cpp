#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        if(n%3==0)
        {
            cout<<n/3<<" "<<n/3<<"\n";
        }
        else if(n%3==1)
        {
            cout<<((n-1)/3)+ 1 <<" "<<(n-1)/3<<"\n";
        }
        else if(n%3==2)
        {
            cout<<((n-2)/3) <<" "<<((n-2)/3)+1<<"\n";
        }
    }
    return 0;
}