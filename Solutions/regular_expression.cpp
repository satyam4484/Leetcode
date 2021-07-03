#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
#define  loop(i,a,b)  for(int i=(a);i<(b);i++)
class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool> >dp(p.size() + 1,vector<bool>(s.size() +1 ,false));

        loop(i,0,p.size() +1 ) {
            loop(j,0,s.size()+1) {
                if(i ==0 and j ==0) {
                    dp[i][j] = true;
                } else if(i == 0) {
                    dp[i][j] = false;
                } else if(j ==0) {
                    if(p[i-1] == '*') dp[i][j] = dp[i-2][j];
                    else dp[i][j] = false;
                } else {
                    char pt = p[i-1];
                    char st = s[j-1];
                    if(pt == '*') {
                        dp[i][j] = dp[i-2][j];
                        char ans  = p[i-2];
                        if(ans == '.' or ans == st) {
                            dp[i][j] = dp[i][j] or dp[i][j-1];
                        }
                    } else if(pt =='.') {
                        dp[i][j] = dp[i-1][j-1];
                    } else if(pt == st) {
                        dp[i][j] = dp[i-1][j-1];
                    } else {
                        dp[i][j] = false;
                    }
                }
            }
        }
        return dp[p.size()][s.size()];
    }
};


int main( ) {
    string s="aa",p="a";
    Solution st;
    if(st.isMatch(s,p)) cout<<"True"<<endl;
    else cout<<"false"<<endl;
    return 0;
}