#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution {
public:
    int romanToInt(string s)
    {
        map<char,int>roman;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;

        int sum = 0;
        for (int i = 0; i < s.size();i++){
            if (roman[s[i]]<roman[s[i+1]]){
                sum+=roman[s[i+1]]-roman[s[i]];
                i+=1;
            }
            else{
                sum+=roman[s[i]];
            }
        } 
        return sum;
    }
};


int main( ) {
    string s="LVII";
    Solution st;
    cout<<st.romanToInt(s);
    return 0;
}