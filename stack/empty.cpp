#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int sum=0; //sum(0) will also work smoothly
    stack<int> s;
    for(int i=1;i<=10;i++)
        s.push(i);
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }
    cout<<sum<<"\n";
}