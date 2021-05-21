#include<iostream>
using namespace std;
bool issafe(int board[][10],int i,int j, int n ){
    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

    return true;

}

bool solvenqueen(int board[][10],int i ,int n){
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1)
                    cout<<1<<"   ";
                else
                    cout<<0<<"   ";
            }
            cout<<endl<<endl;
        }
        return true;
    }
    for(int j=0;j<n;j++){
        if(issafe(board,i,j,n)){
            board[i][j]=1;
        if(solvenqueen(board,i+1,n)) return true;

        board[i][j]=0;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int board[10][10]={0};
    solvenqueen(board,0,n);

}
