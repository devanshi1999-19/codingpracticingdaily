//Variation of 0-1 knapsack, count the number of subsets having sum equal to target
#include<bits/stdc++.h>
using namespace std;
int subsetsum(int a[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++)
        dp[0][i]=0;
    for(int j=0;j<=n;j++)
        dp[j][0]=1;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(a[i-1]>j)
            dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i-1]];
            
            
        }
    }
    return dp[n][sum];
    
}
int main()
{
    int n=5;
    int a[] = {2,3,5,8,10};
    int sum=10;
    cout<<subsetsum(a,n,sum);
    return 0;
}