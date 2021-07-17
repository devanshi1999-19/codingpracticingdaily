#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	    float res =(sqrt(1+8*n)-1)/2.0;
	    cout<< floor(res)<<endl;
	}
	return 0;
}
