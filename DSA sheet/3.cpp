#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={5,4,7,1,9,34,84};
    
    sort(v.begin(),v.end());
    for(auto x:v) cout<<x<<" ";
    int m,l;
    cout<<endl;
    cin>>m>>l;
    cout<<endl<<v[m-1];
    reverse(v.begin(),v.end());
    cout<<endl<<v[l-1];
    return 0;
}