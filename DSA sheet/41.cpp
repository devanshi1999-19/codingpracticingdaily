//print spiral matrix 
//code by shashank rustagi
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> spirallyTraverse(vector<vector<int> > a, int m, int n) 
    {
        int i, k=0,l=0;
        vector<int> v;
        
    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i) {
            v.push_back(a[k][i]);
        }
        k++;
 
        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i) {
            v.push_back(a[i][n-1]);
        }
        n--;
 
        /* Print the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                v.push_back(a[m-1][i]);
            }
            m--;
        }
 
        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                v.push_back(a[i][l]);
            }
            l++;
        }
    }
        
        return v;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        vector<vector<int>> matrix(m);
        for(int i=0;i<m;i++)
        {
            matrix[i].assign(c,0);
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        }
        Solution s;
        vector<int> result = s.spirallyTraverse(matrix,m,n);
        for(auto x:result) cout<<x<<" ";
        
    }
    return 0;
}