#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    convertToWave(int *a, int n);

        return 0;
}
void convertToWave(int *a, int n)
{

    int i, temp;
    if (n % 2)
    {
        for (i = 0; i < n - 1; i += 2)
        {
            temp = *(a + i);
            *(a + i) = *(a + 1 + i);
            *(a + i + 1) = temp;
        }
    }
    else
    {
        for (i = 0; i < n; i += 2)
        {
            temp = *(a + i);
            *(a + i) = *(a + 1 + i);
            *(a + i + 1) = temp;
        }
    }
}