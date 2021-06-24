#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N, Q;
    cin >> N >> Q;
    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];
    while (Q--)
    {
        int temp, count = 0, flag = 1;
        cin >> temp;
        for (int i = 0; i < N; i++)
        {
            if (temp< a[i])
                ++count;
            if (temp == a[i])
            {
                flag = 0;
                count = -1;
                cout << "0"
                     << "\n";
                break;
            }
        }

        if (count % 2 != 0 and flag == 1)
            cout << "POSITIVE"
                 << "\n";
        else if (flag == 1)
            cout << "NEGATIVE"
                 << "\n";
    }

    return 0;
}