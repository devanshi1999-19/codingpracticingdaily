#include <bits/stdc++.h>
#define max 100000
using namespace std;
class Solution
{
public:
    int multiply(int x, int a[], int k)
    {
        int carry = 0;
        for (int i = 0; i < k; i++)
        {
            int prod = a[i] * x + carry;
            a[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry)
        {
            a[k] = carry % 10;
            carry = carry / 10;
            k++;
        }
        return k;
    }
    vector<int> factorial(int n)
    {

        int a[max];
        vector<int> v;
        a[0] = 1;
        int k = 1;
        for (int x = 2; x <= n; x++)
            k = multiply(x, a, k);
        for (int i = k - 1; i >= 0; i--)
            v.push_back(a[i]);
        return v;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << n << "!=  ";
    vector<int> v1 = s.factorial(n);
    for (auto x : v1)
        cout << x;
    cout << endl;
    return 0;
}