#include<bits/stdc++.h>
using namespace std;

void rightrotate(int a[],  int from, int to){
    int temp=a[to];
    for(int i=to; i>from;i--)
        a[i]=a[i-1];
    a[from] = temp;
    // 1 2 3 4 5
    // 5 1 2 3 4 
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int from,to;
    cin>>from>>to;
    rightrotate(a,from,to);

    for(int i=0;i<n;i++){
        cout<<a[i]<<"   ";
    }
    return 0;
}