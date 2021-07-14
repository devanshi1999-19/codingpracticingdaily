#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(7,100);
    stack<int,vector<int>> s(v);
    cout<<s.size();
    return 0;
}