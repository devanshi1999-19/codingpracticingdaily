#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
    int a[n][n];
	memset(a, 0, sizeof(a)); //used to copy 0 t0 entire 2d array
	int i =0;
	int j =n/2;
	for (int num = 1; num <= n * n;) 
    {
		if (i == -1 && j == n)
		{
			j-=1;
			i+=2;
		}
		else 
        {
			if (j == n)
				j = 0;
			if (i < 0)
				i = n - 1;
		}
		if (a[i][j])
		{
			i+=2;
			j--;
			continue;
		}
		else
			a[i][j] = num++;
		j++;
		i--;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << setw(4) << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
