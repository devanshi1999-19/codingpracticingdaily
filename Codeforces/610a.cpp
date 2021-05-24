#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        
        n=n/2;
        long long int r = n-1;
        int count =0;
        while(r>n/2){
            count++;
            r--;
        }
        cout<<count<<"\n";
    }
    return 0;
}