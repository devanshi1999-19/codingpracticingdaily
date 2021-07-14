#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(5);
    s.top()-=1;
    cout<<s.top();
    return 0;
}