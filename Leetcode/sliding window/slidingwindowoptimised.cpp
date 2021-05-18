#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8};
    int k,wsum=0,msum=INT16_MIN,i,end,n;
    n=v.size();
    cout<<"Window size"<<endl;
    cin>>k;
    for(i=0;i<k;i++)
    wsum+= v[i];

    for(end=k;end<n;end++)
    {
        wsum+= v[end]-v[end-k];
        msum = max(wsum,msum);
    }

    cout<<"Maximum sum optimised:-  "<<msum<<endl;
    return 0;
}