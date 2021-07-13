#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int d,x,y,z;
            cin>>d>>x>>y>>z;
            if(y>x and x>z and z>=1 and y<=18 and y>=1 and d<7 and d>=1)
                cout<<max(7*x , (y*d) + (7-d)*z);

    }
    return 0;
}