/*Find the triplet that sum to a particular number
This question has been asked by Accolite, Microsoft, Carwale, Samsung etc
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the number of elements of array\n";
        cin >> n;
        cout << "Input the array elements\n";
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int target;
        cout << "Target: \n";
        cin >> target;
        int ans = 0;
        sort(a, a + n);
        for (int i = 0; i < n - 2; i++)
        {
            int low = i + 1, high = n - 1;
            while (low < high)
            {
                int curr = a[i] + a[low] + a[high];
                if (curr == target)
                {
                    ans = 1;
                    break;
                }
                else if (curr < target)
                    low++;
                else
                    high--;
            }
        }
        if (ans == 1)
            cout << "Triplet exists\n";
        else
            cout << "Triplet doesn't exist\n";
    }
    return 0;
}