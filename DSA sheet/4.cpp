#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={0,1,2,0,1,2};
    sort(v.begin(),v.end());
    for(auto x:v) cout<<x<<"  ";
    return 0;
}