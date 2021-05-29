/*
Rearrange array in alternating positive & negative items with O(1) extra space 
HARD LEVEL

+-+-+-... we have to rearrange in this manner
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        int i = 1,j=2;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        while (i < n and j < n)
        {
            if (v[i] < 0 and v[j] < 0)
            {
                j++;
            }
            else if (v[i] < 0 and v[j] >= 0 and i!=j)
            {
                swap(v[i], v[j]);
                i += 2;
                j=i;
            }
            else if (v[i] >= 0 and v[j] >= 0)
            {   i++; 
                j++;
            }
            else
            j++;
            
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << "  ";
        }


    return 0;
}