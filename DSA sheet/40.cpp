// Median of two sorted arrays of different size(efficient approach)
//constant space and linear time
#include<bits/stdc++.h>
using namespace std;
float medianoftwoelements(int a, int b){
    return (a+b)/2.0;
}
float medianofthreeelements(int a,int b, int c){
    return a+b+c - max(a,max(b,c))-min(a,min(b,c));
}
float medianoffourelements(int a,int b, int c,int d){
    int MAX = max(a,max(b,max(c,d)));
    int MIN = min(a,min(b,min(c,d)));
    return (a+b+c+d-MAX-MIN)/2.0;
}
float mediansingle(int arr[],int n){
    if(n==0) return -1;
    if(n%2==0) return (double) (arr[n/2] + arr[n/2 -1]) /2.0;
    return arr[n/2];
}

float findmedian(int A[],int m, int B[], int n)
{
    if(n==0) return mediansingle(B,m);
    if(n==1)
    {
        if(m==1)
            return medianoftwoelements(A[0],B[0]);
        if(m&1) 
            return medianoftwoelements(B[m/2],medianofthreeelements(A[0], B[m/2 - 1], B[m/2 + 1] ) );
        return medianofthreeelements( B[m/2], B[m/2 - 1], A[0] );
    }
    else if(n==2)
    {
        if (m == 2) return medianoffourelements(A[0], A[1], B[0], B[1]);
        if (m&1) return medianofthreeelements ( B[m/2], max(A[0], B[m/2 - 1]),min(A[1], B[m/2 + 1]));
        return medianoffourelements ( B[m/2], B[m/2 - 1], max( A[0], B[m/2 - 2] ), min( A[1], B[m/2 + 1] ));
    }
    int idxA = ( n- 1 ) / 2;
    int idxB = ( m - 1 ) / 2;
    if (A[idxA] <= B[idxB] )
      return findmedian(A + idxA, n/2 + 1, B, m - idxA );
    return findmedian(A, n/2 + 1, B + idxA, m - idxA );
}

float FINDMED( int A[], int n, int B[], int m )
{
    if (n > m)
       return findmedian( B, m, A, n );
 
    return findmedian( A, n, B, m );
}
int main()
{
    int A[] = {900};
    int B[] = {5, 8, 10, 20};
 
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    printf("%f", findmedian( A, n, B, m ) );
    return 0;
}