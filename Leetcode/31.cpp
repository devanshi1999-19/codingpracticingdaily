/*
Next Permutation 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v={4,8,7,6,2};
    n = v.size();
    //vector contains the number
    //47862;
    int l, k;
    for (k = n - 2; k >= 0; k--)
    {
        if (v[k] < v[k + 1])
        {
            break;
        }
    }
    if (k < 0)
        reverse(v.begin(), v.end());
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (v[l] > v[k])
                break;
        }
        swap(v[k], v[l]);
        reverse(v.begin() + k+1, v.end());
    }

    for (auto x : v)
        cout << x;
    return 0;
}