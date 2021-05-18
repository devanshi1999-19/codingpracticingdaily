#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={3,4,7,9,11},res;
    int target=7;
    unordered_map<int,int> mmp;
    for(int i=0;i<v.size();i++)
    {
        if(mmp.find(target-v[i])!=mmp.end())
        {
            res.push_back(mmp(target-v[i]));
            res.push_back(i);
            return res;
        }
        mmp[v[i]]=i;
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<endl;
    }
    return 0;
}