#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i,j, key;
    for(int i=0;i<n;i++) cin>>a[i];
    //6 7 3 2 11
    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 and a[j]>key)
        {
            a[j+1]= a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(auto x: a) cout<<x<<"  ";
    return 0;
}