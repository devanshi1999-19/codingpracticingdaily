//introducing size of stack, it determined the current size of our pushdown stack.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(4);
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    return 0;
}