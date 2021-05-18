#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<queue>
using namespace std;
class Solution{
    public: string reorganiseString(string s)
    {
        unordered_map<char,int> um;
        priority_queue<pair<int,char>> pq;
        string output="";
        for(auto i:s)
            um[i]++;
        for(auto &i:um)
        {
            pq.push({i.second,i.first});
        }
        while(pq.size()>1)
        {
            auto top1 = pq.top();
            pq.pop();
            auto top2 = pq.top();
            pq.pop();
            output+=top1.second;
            output+=top2.second;
            if(--top1.first>0)
            {
                pq.push(top1);
            }
            if(--top2.first>0)
            {
                pq.push(top2);
            }
            
        }
        int n=pq.size();
        if(n)
        {  if(pq.top().first==1)
                output+=pq.top().second;
            else    
                return "[]";
        }    
        return output;

        
    }

};
int main()
{
    string s = "aaaaabbccccccccccdddddddddcccc";
    Solution o;
    cout<<o.reorganiseString(s);
    return 0;
}