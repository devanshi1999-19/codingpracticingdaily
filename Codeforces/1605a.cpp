#include <bits/stdc++.h>
const unsigned int MOD = 1000000007;
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    int e;
    while(t--)
    {
        cin>>e;
        int n=100;
        while(1)
        {
            if(gcd(n,e)==1)
                break;
            n=n/gcd(n,e);
            e = e/gcd(n,e);
            
        }
        cout<<n<<"\n";
    }
    return 0;
}
