#include<bits/stdc++.h>
using namespace std;

class Solution{

  public:

	int minDifference(int a[], int n)  
	{ 
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        
        bool dp[n+1][sum+1];
        
        
        for(int i=0;i <= sum; i++)
            dp[0][i] = false;
        for (int i = 0; i <= n; i++)
            dp[i][0] = true;
        
        for(int i=1;i<=n;i++)
        {
            for (int j=1; j<=sum; j++)
            {
        
                dp[i][j] = dp[i-1][j];
 
                if (a[i-1] <= j)
                    dp[i][j] |= dp[i-1][j-a[i-1]];
            }
        }
        
        int mn = INT_MAX;
    
        for (int j=sum/2; j>=0; j--)
            if (dp[n][j] == true) //for last row, checking each element to be true
                mn = min(mn,sum-2*j);
        return mn;
	} 
};

int main()
{
    Solution s ;
    int n;
    int a[]={1,6,11,5};
    n = sizeof(a)/sizeof(a[0]);
    cout<<s.minDifference(a,n)<<endl;
    return 0;
}