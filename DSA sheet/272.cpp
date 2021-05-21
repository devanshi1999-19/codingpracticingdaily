//rat in a maze
/*
My first backtracking problem, In this problem we will be learning
dynamic memory allocation of a 2D array and we will use backtracking 
to solve rat in a maze problem

Code by Shashank Rustagi
*/

#include <bits/stdc++.h>
using namespace std;
//This will return false if Rat is unable to move in any
//direction(Right or Down or Both)
bool issafe(int **arr, int x, int y, int n)
{
    if (x < n and y < n and arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool RATINMAZE(int **arr, int x, int y, int n, int **SolutionArray)
{
    if (x == n - 1 and y == n - 1)
    {
        SolutionArray[x][y] = 1;
        return true;
    }
    if (issafe(arr, x, y, n))
    {
        SolutionArray[x][y] = 1;
        if (RATINMAZE(arr,x + 1, y, n, SolutionArray))
        { //going right if it can
            return true;
        }
        if (RATINMAZE(arr,x, y + 1, n, SolutionArray))
        { //going down if it can
            return true;
        }
        SolutionArray[x][y] = 0; //backtracking step as we saw that it can neither go right or down
        //hence we will return false
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout<<endl;
    int **arr = new int *[n]; //dynamic memory allocation for n rows
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **SolutionArray = new int *[n];
    for (int i = 0; i < n; i++)
    {
        SolutionArray[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            SolutionArray[i][j] = 0;
            //assigning 0 to the 2d array as might have garbage values
        }
    }
    if (RATINMAZE(arr, 0, 0, n, SolutionArray))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << SolutionArray[i][j] << " ";
            }
            cout << endl;
        }
    }

    // 1 0 1 0 1
    // 1 1 1 1 1
    // 0 1 0 1 0
    // 1 0 0 1 1
    // 1 1 1 0 1
    return 0;
}