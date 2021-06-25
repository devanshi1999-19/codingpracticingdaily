/*
This question is the most important question in Leetcode medium level which tells us the importance
of recursion as well as backtracking, we are given an array/vector of some numbers, and we are asked that can 
this array/vector be partitioned into k buckets of equal sum, if yes, then we have to print yes, else
we will print no.

This is kind of a problem inspired from 0-1 knapsack, but we will see backtracking approach to solve this problem
The approach of this code is to 

1. calculate the sum of all the vector elements.
2. check if sum%k is 0 or not, if not return false straight away and also return false if k<=0
3. We have to make a visited array to keep a count that whether that array element is visited or not
4. we will use call by reference everywhere and initially this visited array will be all set to 0
5. we will use backtracking and recursive calls in order to set and reset the visited array from 0 to 1 
and 1 to 0 and return true if and only if all the buckets are full, the most important condition here is 
if we have k-1 buckets full completely , and also we saw that sum%k is 0 then this means, the remaining 1 
buclet is also full by definition of normal mathematics, so this will be our base case and we will be returning 
true in this case.
6. Now, in our main function we will initialise the input vector and k and then pass it to the 
canPartitionKSubsets function in the solution class. As you can see, the canPartitionKSubsets function
receives the address of this vector in the memory, so it is the game of pointers now.
7. The return type of this function will be boolean and we will be returning canpartition with some
input parameters which we will be discussing now in the next points

8. We have to thoroughly understand this canPartition function as this function is the heart of this 
algorithm, you will see that this function will do some recursive calls, time and again and also touch
the backtracking appraoch here , so please carefully read what I am going to instruct you guys.

9. read all the comments in the code, for better readability, i have written the comments in the code itself.
10. Thanks for reading


*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPartitionKSubsets(vector<int> &nums, int k)
    {
        int sum = 0;
        int n = nums.size();
        for (int num : nums)
            sum += num;
        //calculate sum
        if (k <= 0 || sum % k != 0)
            return false;
        //returning false if k is less or equal to 0 or modulus is not 0

        vector<int> visited(n, 0);
        // creating visited vector for all elements in nums array initially set to 0
        return canPartition(nums, visited, 0, k, 0, 0, sum / k);
        //calling canpartition function on whole array
    }

    bool canPartition(vector<int> &nums, vector<int> &visited, int start_index, int k, int cur_sum, int cur_num, int target)
    /*
        This canpartition function contains nums array, visited array call by reference,
         and starting index of array which is 0 , k which is the number of buckets having 
         equal sum, also currentsum which stores the sum uptil now which should not exceed 
         sum/k value, and last but not the least, we have target which is sum/k
        The currentnumber or cur_num field is the number where we have seen the array till now.
        */
    {
        if (k == 1)
            return true;
        //This is the base condition, when the k-1 buckets are successfully filled,
        //and the last bucket is left, so we will return true in this case.
        if (cur_sum == target && cur_num > 0)
            return canPartition(nums, visited, 0, k - 1, 0, 0, target);

        /*
        This if condition is checking that if our current sum is equal to the 
        target and at the same time the current sume is +ve in nature, in that 
        case, we will recursively call the canpartition function for the remaining
         k-1 buckets and keep on checking this condition until currentsum is equal
          to the target or not. if in case current sum is less than the target, then
           this if condition wont get executed and we will move in the control flow
            of the below mentioned for loop.
        */
        int n = nums.size();
        for (int i = start_index; i < n; i++)
        //This is the forloop which starts from the start index and go till end of //nums array
        {
            if (!visited[i]) // if node is not visited, set it visited
            {
                visited[i] = 1;
                if (canPartition(nums, visited, i + 1, k, cur_sum + nums[i], cur_num++, target))
                    return true;

                /*
                This if condition is recursively calls the canpartition function with nums array,
                 visited array, start index of next array element i.e. i+1, k remains same i.e. 
                 the number of buckets, currentsum changes to current sum+ what we included 
                 in the nums[i] value , and the current number is incremented by 1. so if after
                  this call we get true as output, this means, we have found our bucket sum to be
                   equal to target sum and we are all good, so we will return true in this case,
                
                Now the best part of this algorithm is backtracking, which we will be doing in the 
                next step, so if somehow, this above if condition doesnt execute to be true, i.e 
                it results false, this means, we wont be returning true, in anycase.
                */
                visited[i] = 0;
                /*this is the backtracking step, we reset this value in visited 
                array as this does not help us fill the bucket */
            }
        }
        return false;

        //at the end, if we are unable to return true, we will return false.
    }
};
int main()
{
    Solution s;
    vector<int> v = {4, 3, 2, 3, 5, 2, 1};
    int k = 4;
    if (s.canPartitionKSubsets(v, k))
        cout << "Yes, can be partitioned\n\n";
    else
        cout << "No, Cannot be partitioned\n\n";
    return 0;
}