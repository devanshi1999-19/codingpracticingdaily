#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int b[3]={4,5,8};
    int uab[8]={0};
    int iab[3]={0};
    int i=0,j=0,k=0,l=0,c=0,d=0;
    while(i<=4 && j<=2)
    {
        if(a[i]!=b[j])
        {
            uab[k++]=a[i++];
            c++;
        }
        if(a[i]==b[j])
        {
            uab[k++]=a[i];
            iab[l++]=a[i];
            i++;
            j++;
            c++;
            d++;
        }
        if(i>4)
        {
            uab[k++]=b[j++];
            c++;
        }
        if(j>3)
        {
            uab[k++]=a[i++];
            c++;
        }
    }
    cout<<"Union of both arrays"<<endl; 
    for(k=0;k<c;k++)
            cout<<uab[k]<<" ";
    cout<<endl;
    cout<<"Intersection of both arrays"<<endl; 
    for(l=0;l<d;l++)
        cout<<iab[l]<<" ";
    return 0;
}