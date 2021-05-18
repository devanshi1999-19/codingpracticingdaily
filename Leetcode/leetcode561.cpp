class Solution {
public:
int arrayPairSum(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    int maximized_sum= 0;
    for(int i =0; i<nums.size(); i+=2){
        maximized_sum += min(nums[i], nums[i+1]);
    }
    return maximized_sum;
}
};