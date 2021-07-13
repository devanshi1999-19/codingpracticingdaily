#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g,c;
        cin>>g>>c;
        if(g>=1 and g<10 and c>=1000 and c<=3000 and ((c*c)%(2*g)==0))
        {
            cout<<(c/2)*(c/g)<<"\n";
        }
    }
    return 0;
}