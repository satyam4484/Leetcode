#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size() ; i++) {
            if(s[i] == '(' or s[i] =='{' or s[i] =='[') st.push(s[i]);
            else {
                if(st.empty()) return false;
                char c=st.top();
                st.pop();
                if(s[i] ==')' and c!='(') return false;
               else if(s[i] =='}' and c!='{') return false;
               else if(s[i] ==']' and c!='[') return false;
            }
        }
        if(not st.empty()) return false;
        return true;
        
    }
};

int main( ) {
    // string s{"()[]{}"}; // another way of decalaring string 
    string s = "()[]{}";
    Solution st;
    if(st.isValid(s)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
   
    return 0;
}