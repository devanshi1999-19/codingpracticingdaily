#include <bits/stdc++.h>
using namespace std;
bool canpartition(vector<int> &a)
{
    int n = a.size();
    int sum = 0;
    for (auto x : a)
        sum += x;
    if (sum % 2)
        return false;
    sum /= 2;

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                dp[i][j] = false;
            if (j == 0)
                dp[i][j] = true;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= sum; ++j)
        {
            if (a[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - a[i - 1]] or dp[i - 1][j]; //inclusion
            else
                dp[i][j] = dp[i - 1][j]; //exclusion
        }
    }
    return dp[a.size()][sum];
}
int main()
{
    vector<int> a = {1, 5, 5, 11};
     if(canpartition(a)) cout<<"Partition Possible\n";
     else cout<<"Partition not possible\n";
    return 0;
}