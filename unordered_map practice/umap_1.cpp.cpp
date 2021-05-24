#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,string> m;
    m["AAhashank"] = "aaaaawhere";
    m["Bhreya"]= "Microsoft";
    m["Nidhi"] = "Accenture";
    m["Love Babbar"] = "Amazon";

    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}

//output for both map and unord ered map is same
//earlier i tried this code for unordered map