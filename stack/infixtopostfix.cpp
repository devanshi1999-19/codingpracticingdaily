#include<bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    if(c=='+' or c=='-') return 1;
    else if(c=='*' or c=='/') return 2;
    else if(c=='^') return 3;
    else return -1;
}
void infixtopostfix(string s)
{
    stack<int> st;
    string result;
    for(int i=0;i< s.length();i++)
    {
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' or s[i]<='Z') or (s[i]>='0' and s[i]<='9'))
            result+=s[i];
        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')')
        {
            while(st.top()!='(')
            result+=st.top();
            st.pop();
        }
        else
        {
            while(!st.empty() and precedence(s[i])<=precedence(st.top()))
            {
                result+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }
    cout<<result;
}
int main()
{
    //we will be given an infix operation and we need to return postfix of it.
    //we will use strings and stack in order to achieve this.

    string s;
    cin>>s;
    infixtopostfix(s);
    return 0;
}