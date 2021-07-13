#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
    int ans;
    while(t--)
    {

        cin>>n>>k;
        vector<int> a(n);  
        for(int &i:a)
            cin>>i;
        vector<int> v(31);
         int count,term;
        for(int bit=0;bit<=30;bit++)
        {
            count=0;
            for(int &i:a)
            {
                if(i%2)count++;
                i/=2;
            }
            v[bit]=count;
            
        }
        
        ans=0;
         for(int bit=0;bit<=30;bit++)
        {
            if(v[bit]%k==0)
                ans+= v[bit]/k;
            else
            ans+= v[bit]/k +1;
        }
        
        cout<<ans<<"\n";
        
    }
    return 0;
}