#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<int> s{1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        vector<string> st{"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int i = 12;
        string str = "";
        while (num > 0)
        {

            int x = num / s[i];
            num = num % s[i];
            while (x--)
            {
                str += st[i];
                ;
            }
            i--;
        }
        return str;
    }
};


int main( ) {
    int num = 1994;
    Solution s;
    cout<<s.intToRoman(num);
    return 0;
}