#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int multiply(int x, int res[], int res_size)
    {
    	int carry = 0;
	    for (int i=0; i<res_size; i++)
	    {
		    int prod = res[i] * x + carry;
		    res[i] = prod % 10;
		    carry = prod/10;
	    }
	    while (carry)
	    {
		    res[res_size] = carry%10;
		    carry = carry/10;
		    res_size++;
	    }
	    return res_size;
    }
    vector<int> factorial(int n)
    {
    
	    int res[10000];
        vector<int> v;
	    res[0] = 1;
	    int res_size = 1;
	    for (int x=2; x<=n; x++)
		    res_size = multiply(x, res, res_size);
	    for (int i=res_size-1; i>=0; i--)
	        v.push_back(res[i]);
	    return v;
    }
};
int main(){
    Solution s;
    vector<int> v1 = s.factorial(100);
    for(auto x:v1) cout<<x;
    return 0;
}