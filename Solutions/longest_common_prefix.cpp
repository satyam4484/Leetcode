#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    int getmaxlen(vector<string>&strs){
        int mins=strs[0].length();
        for (int i = 1; i < strs.size(); i++)
        {
            if(strs[i].length()<mins){
                mins=strs[i].length();
            }
        }
        return mins;
    }
    string longestCommonPrefix(vector<string>& strs) {
         string s;
        if(strs.size()==0){
            return s;
        }
        int get_min=getmaxlen(strs);
        char c;
        for (int i = 0; i < get_min; i++)
        {
            c=strs[0][i];
            // cout<<c;
            for (int j=1; j <strs.size(); j++)
            {
                if(strs[j][i]!=c){
                    return s;
                }
            }
            s.push_back(c); 
        }
        return s;
    }
};


int main( ) {
    vector<string>strs = {"flower","flow","flight"};
    Solution s;
    cout<<s.longestCommonPrefix(strs);
    return 0;
}