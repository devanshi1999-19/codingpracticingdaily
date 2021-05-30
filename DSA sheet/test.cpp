#include <bits/stdc++.h>
using namespace std;
#define max 100000
class Solution
{
public:
    int product(int res[], int x, int k)
    {
        int carry = 0;
        for (int i = 0; i < k; i++)
        {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry)
        {
            res[k] = carry % 10;
            carry = carry / 10;
            k++;
        }
        return k;
    }
    vector<int> factorial(int n)
    {
        vector<int> v;
        int res[max];
        int k = 1;
        res[0] = 1;
        for (int x = 2; x <= n; x++)
            k = product(res, x, k);
        for (int i = k - 1; i >= 0; i--){
         
            v.push_back(res[i]);
        }
        return v;
    }
};

int main()
{
    Solution s;
    
    int n;
    cin >> n;
    vector<int> v1 = s.factorial(n);
    for (auto x:v1)
    {
        cout << x << " ";
    }
    cout << endl;
}