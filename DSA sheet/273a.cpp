//Printing all solutions of NQueen Problem using backtracking
#include<iostream>
using namespace std;
//function to check whether we can go to left diagonal or right diagonal or same coloumn or not
bool issafe(int a[][10], int row, int col,int n){
    for(int i=0;i<row;i++)
        if(a[i][col]==1)
            return false;

    int x=row;
    int y=col;
    while(x>=0 && y>=0)
    {
        if(a[x][y]==1)
            return false;
        x--;
        y--;
    }
    while(x>=0 && y<n)
    {
        if(a[x][y]==1)
            return false;
        x--;
        y++;
    }

    return true;
    
}
bool NQueen(int a[][10],int x, int n){
    if(x==n){
        for(x=0;x<n;x++){
            for(int y=0;y<n;y++){
                if(a[x][y]==1){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }cout<<endl;
        }
        return true;
    }

    for(int y=0;y<n;y++)
    {
        if(issafe(a,x,y,n)){
            a[x][y]=1;
            if(NQueen(a,x+1,n))
                return true;
            a[x][y]=0;
        }
    }
    return false;

}
int main(void){
    int n;
    cin>>n;
    int a[10][10]={0};
    NQueen(a,0,n);

}