//nth catalan number
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    int solve(int n,int dp[])
    {
        if(n==0) return  dp[0]=1;
        if(n<=2) return dp[n] =n;
        if(dp[n]) return dp[n];
        unsigned long int res=0;
        for(int i=0;i<n;i++)
            res += catalan(i)* catalan(n-i-1);
        return res;
    }

    int catalan(int n)
    {
        int dp[n+2]={};
        return solve(n,dp);
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<n<<"th catalan number is  "<<s.catalan(n);

    return 0;
}