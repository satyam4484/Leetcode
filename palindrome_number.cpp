#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int r;
        unsigned int sum = 0;
        int x1 = x;
        if (x < 0){
            return false;
        }
        while (x != 0){
            r = x % 10;
            x = x / 10;
            sum = (sum * 10) + r;
        }
        if (sum == x1){
            return true;
        }
        return false;
    }
};

int main( ) {
    int x = 121;
    Solution s;
    if(s.isPalindrome(x)) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}