#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' )
            continue;
        else
            cout<<"."<<s[i];
    }
    return 0;
}