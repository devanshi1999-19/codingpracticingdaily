#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5,6,7};
    cout<<*min_element(a.begin(),a.end());
    cout<<" "<<endl;
    cout<<*max_element(a.begin(),a.end());
    return 0;

}