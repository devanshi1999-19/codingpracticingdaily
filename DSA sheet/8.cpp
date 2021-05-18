#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={5,-1,-6,-2,8};
    int max=0,curr=0;
        for(int i=0;i<5;i++)
        {
            curr = curr+a[i];
            if(curr>max)
            max=curr;
            if(curr<0)
            curr=0;
            
        }
        cout<<max;
        return 0;
}