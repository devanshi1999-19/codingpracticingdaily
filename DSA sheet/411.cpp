#include<bits/stdc++.h>
using namespace std;
int P(int n,int k)
{
    int dp[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,k);j++)
        {
            if(!j)
                dp[i][j]=1;
            else
                dp[i][j] = dp[i-1][j] + j*dp[i-1][j-1];

            dp[i][j+1]=0;
        }
    }
    return dp[n][k];
}
int main()
{
    int n=14,k=7;
    cout<<P(n,k);

    
    return 0;
}