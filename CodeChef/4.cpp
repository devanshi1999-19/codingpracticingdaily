#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int evencount = 0;
        cin >> n;
        if (n >= 1 and n < 1e5)
        {
            int maxx = INT_MIN;
            int minn = INT_MAX;
            int a[n];
            for (int i = 0; i < n; i++)
            {

                cin >> a[i];
                cout << endl;
                if (a[i] >= 1 and a[i] <= 1e9)
                {
                    if (a[i] > maxx)
                        maxx = a[i];
                    if (a[i] < minn)
                        minn = a[i];
                }
            }
            int denomination = 1;
            for (int i = 0; i < n; i++)
                if (a[i] == maxx)
                    a[i] = minn;
            for (int i = 0; i < n; i++)
                if (a[i] % 2 == 0)
                    evencount++;
            if (evencount == n)
                denomination = minn;
            else
                denomination = 1;
            int finalsum = 0;

            for (int i = 0; i < n; i++)
                if (denomination != 0)
                    finalsum += a[i] / denomination;

            cout << finalsum << "\n";
        }
    }
    return 0;
}