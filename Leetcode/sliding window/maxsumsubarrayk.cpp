#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,wsum,msum=0;
    vector<int> v={2,1,5,1,3,2};
    n = v.size();
    cin>>k;
    for(i=0;i<=n-k;i++)
    {
        wsum=0;
        for(int j=i;j<i+k;j++)
        {
            wsum+=v[j];
        }
        msum = max(wsum,msum);
    }
    cout<<"Maximum sum subarray of length "<<k<<" is "<<msum;
    return 0;
}