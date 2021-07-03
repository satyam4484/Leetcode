#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        set<char>s1;
        int i=0,j=0,m=0;
        while (i<s.length())
        {
            if (s1.insert(s[i]).second)
            {
                i++;
                m=max(m,i-j);
            }
            else
            {
                s1.erase(s[j]);
                j++;
            }
            
        }
        return m;
    }
};

int main( ) {
    string str = "abcabcbb";
    Solution s;
    cout<<s.lengthOfLongestSubstring(str);
    return 0;
}