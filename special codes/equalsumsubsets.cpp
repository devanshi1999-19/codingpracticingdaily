#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool SS(int a[],int sum)
    {
        int n = sizeof(a)/sizeof(a[0]);
        bool dp[n+1][sum+1];
        for(int i=0;i<=sum;i++)
            dp[0][i]=false;
        for(int i=0;i<=n;i++)
            dp[i][0] = true;

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(a[i-1]<=j){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i]];
                }
                else if(a[i-1]>j)
                    dp[i][j] = dp[i-1][j];
            }
        }

        return dp[n][sum];
    }

    bool equalsumsubset(int a[],int sum)
    {
        int n = sizeof(a)/sizeof(a[0]);
        if(sum%2) return false;
        sum/=2;
        return SS(a,sum);
    }
};
int main()
{
    Solution s;
    int a[] = {1,1,8,14};
    int n = sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=0;i<=n;i++) sum+=a[i];
    if(s.equalsumsubset(a,sum)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}