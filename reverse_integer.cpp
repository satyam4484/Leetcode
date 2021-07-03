#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long rev = 0;
        while (x)
        {
            rev = rev * 10 + (x % 10);
            if (rev > INT_MAX || rev < INT_MIN)
            {
                rev = 0;
                break;
            }
            x = x / 10;
        }
        return rev;
    }
};

int main()
{
    int x = 123;
    Solution s;
    cout<<s.reverse(x);
    return 0;
}