//Given a string of words, find the frequency of words in the string.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printfrequencies(const string &str){
    unordered_map<string,int> m;
    stringstream ss(str);
    string word;
    while(ss >> word){
        m[word]++;
        unordered_map<string,int>:: iterator it;
        for(it = m.begin();it!=m.end();it++)
            cout << it->first << "   "  << it->second <<endl;
        
    }
}
int main(){
    string strs = "Shashank Shashank Shashank Shashank Rustagi";
    printfrequencies(strs);
    return 0;
}