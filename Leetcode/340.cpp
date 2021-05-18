#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
class LS
{
    public: 
    static int findlength(const string &str, int k)
    {
        long unsigned int start=0;
        long int maxl=INT16_MIN;

        unordered_map<char,int> mmp;
        for(long unsigned int end=0;end<str.length();end++)
        {
            char right = str[end];
            mmp[right]++;
            while((int)mmp.size()>k)
            {
                char left =str[start];
                mmp[left]--;
                if(mmp[left]==0)
                {
                    mmp.erase(left);
                }
                start++;
            }
            maxl = max(maxl,end-start+1);
        }
        return maxl;
    }

    public: 
    static int LengthOfLongestSubstring(const string &s)
    {
        long int maximum = INT16_MIN;
        long unsigned int i=0,j=0;
        if(s.length() == 0) return 0;
        unordered_map<char, int>m;
        while(j<s.length())
        {
            m[s[j]]++;
            if(m.size() == j-i+1)
                maximum = max(maximum, j-i+1);
            else if(m.size() < j-i+1)
                while(m.size() < j-i+1)
                {
                    m[s[i]]--;
                    if(m[s[i]] == 0)
                    {
                        m.erase(s[i]);
                    }
                    i++;
                }
            else continue;
            j++;
        }
        return maximum;
    } 
};

int main(int argc, char* argv[])
{
    cout<<LS::findlength("shashankrustagi",5)<<endl<<endl;
    cout<<LS::LengthOfLongestSubstring("abababab")<<endl<<endl;
    return 0;
}