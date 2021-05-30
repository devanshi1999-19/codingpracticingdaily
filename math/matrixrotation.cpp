#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    cout<<"\nOriginal array \n\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<"   ";
        cout<<endl;
    }
    //calculate transpose of a matrix

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap( a[i][j], a[j][i] );
        }
    }
cout<<"\nTransposed array \n\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<"   ";
        cout<<endl;
    }


        


    return 0;
}