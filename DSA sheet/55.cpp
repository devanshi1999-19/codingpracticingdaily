/*Find duplicate character in a string
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;  //inserting the character in the map and incrementing the count
    }
    for(auto x:m){
        if(x.second>1) cout<<x.first<<"   "<<x.second<<endl;
    }

    return 0;
}