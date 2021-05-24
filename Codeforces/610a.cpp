#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n<6){
            cout<<0;
            break;
        }
        n=n/2;
        long long int l=1;
        long long int r = n-1;
        long long int count =0;
        while(l<n and r>n){
            l++;
            r--;
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}