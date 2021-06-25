#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
  bool canPartition(vector<int> &nums, vector<int> &visited, int start_index, int k, int cur_sum, int cur_num, int target)
    {
        int n =nums.size();
        if(k==1) return true;
        if(cur_sum==target and cur_num>0)
            return canPartition(nums, visited, 0, k - 1, 0, 0, target);
        for (int i = start_index; i < n; i++)
        {
            if (!visited[i]) // if node is not visited, set it visited
            {
                visited[i] = 1;
                if (canPartition(nums, visited, i + 1, k, cur_sum + nums[i], cur_num++, target))
                    return true;
                visited[i] = 0;
            }
        }
        return false;
    }
    bool isKPartitionPossible(int a[], int n, int k)
    {
        vector<int> nums;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++)
        nums.push_back(a[i]);
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        
        if(sum%k or k<=0) return false;
        
        return canPartition(nums,visited,0,k,0,0,sum/k);
    }
    
    
};
int main()
{
    Solution s;
    int a[] = {1,5,5,11,6,5,3,8};
    int k=4;
    int n = sizeof(a)/sizeof(a[0]);
    if(s.isKPartitionPossible(a,n,k)) cout<<"Partition is possible\n\n";
    else cout<<"Partition not possible yar!\n\n";
    return 0;
}