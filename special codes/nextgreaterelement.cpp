#include <bits/stdc++.h>
using namespace std;
vector<int> nextgreaterelementtoright(vector<int> &A)
{
    vector<int> result;
    stack<int> s;
    for (int i = A.size() - 1; i >= 0; --i) //traverse the array from end to beginning
    {
        if (s.size() == 0)
            result.push_back(-1); //if stack is empty we will push -1 on vector.
        //if stack is empty, we cant do anything we will push -1 onto the stack!!!
        else if (s.size() > 0 and s.top() > A[i])
            result.push_back(s.top());
        /* if stack is not empty and if we see any top of stack less
          than or equal to our array element, we are not satisfied,
           hence we will pop that element */
        else if (s.size() > 0 and s.top() <= A[i])
        {
            while (s.size() > 0 and s.top() <= A[i])
                s.pop();
            if (s.size() == 0)
                result.push_back(-1);
            else
                result.push_back(s.top());
        }
        s.push(A[i]); //at last after all the preprocessing we can do, we will push this array element onto the stack :)
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<int> nextgreaterelementtoleft(vector<int> A)
{
    vector<int> result;
    stack<int> s;
    for (int i = 0; i < A.size(); ++i) //traverse the array from end to beginning
    {
        if (s.size() == 0)
            result.push_back(-1); //if stack is empty we will push -1 on vector.
        //if stack is empty, we cant do anything we will push -1 onto the stack!!!
        else if (s.size() > 0 and s.top() > A[i])
            result.push_back(s.top());
        /* if stack is not empty and if we see any top of stack less
          than or equal to our array element, we are not satisfied,
           hence we will pop that element */
        else if (s.size() > 0 and s.top() <= A[i])
        {
            while (s.size() > 0 and s.top() <= A[i])
                s.pop();
            if (s.size() == 0)
                result.push_back(-1);
            else
                result.push_back(s.top());
        }
        s.push(A[i]); //at last after all the preprocessing we can do, we will push this array element onto the stack :)
    }
    return result;
}
int main()
{
    vector<int> A = {1, 3, 2, 4};
    vector<int> temp = nextgreaterelementtoright(A);
    for (auto x : temp)
        cout << x << " ";
    cout << endl;
    temp = nextgreaterelementtoleft(A);
    for (auto x : temp)
        cout << x << " ";
    return 0;
}