#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution {
public:
	void helper(string digits,unordered_map<char,string > &phone,vector<string > &ans,string temp,int id ) {
		if( temp.size() == digits.size()) {
			ans.push_back(temp);
			return ;
		}

		string original =phone[digits[id]];
		for(int i=0;i<original.size() ; i++) {
			temp+= original[i];
			helper(digits,phone,ans,temp,id+1);
			temp.pop_back();
		}
	}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string > phone;
		phone['2'] = "abc";
		phone['3'] = "def";
		phone['4'] = "ghi";
		phone['5'] = "jkl";
		phone['6'] = "mno";
		phone['7'] = "pqrs";
		phone['8'] = "tuv";
		phone['9'] = "wxyz";
		vector<string> ans ;
        if(digits.size() == 0) return ans;
		helper(digits,phone,ans,"",0);
		return ans ;
    }
};



int main( ) {
    string digit="23";
    Solution s;

    vector<string>ans = s.letterCombinations(digit);

    for(auto i:ans) {
        cout<<i<<" ";
    }
    return 0;
}