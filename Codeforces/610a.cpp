#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<6 || n%2){
            cout<<0;
            break;
        }
        n=n/2;
        long long int l=1;
        long long int r = n-1;
        int count =0;
        while(l<n && r>n/2){
            count++;
            l++;
            r--;
        }
        cout<<count<<"\n";
    }
    return 0;
}