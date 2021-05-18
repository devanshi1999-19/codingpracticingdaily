class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) 
    {   
        vector<vector<int>> res; 
        sort(num.begin(), num.end()); //first we sorted the vector num
/* a will go till end as last and second last are the lo and hi respectively. */
        for (int i = 0; i <num.size()-2; i++) 
        {
            if (i == 0 || (i > 0 && num[i] != num[i-1])) 
            {   
                int lo = i+1, hi = num.size()-1, sum = 0 - num[i];
/* lo will point one point far from a and hi will point to the point
just less than the size of the array code for lo and hi or b and c  
Also we have to maintain that a=-(b+c) as per the condition a+b+c==0 */
                while (lo < hi) 
                {
                    if (num[lo] + num[hi] == sum) 
                    {
                        vector<int> temp; 
                        temp.push_back(num[i]); 
                        temp.push_back(num[lo]); 
                        temp.push_back(num[hi]); 
                        res.push_back(temp);
                        while (lo < hi && num[lo] == num[lo+1])
                            lo++;
                        while (lo < hi && num[hi] == num[hi-1]) 
                            hi--;
                        lo++; hi--;
                    } 
                    else if (num[lo] + num[hi] < sum) lo++;
                    else hi--;
                    
/*
This means if your b+c is sum then go in and do something
Else if b+c is less then low has to be incremented
else b+c is too big, we cant afford, this means high has to be 
decremented.
 */
               }
                
            }
        }
        return res;
    }
};