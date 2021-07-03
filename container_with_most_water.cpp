#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=-1;
        int first=0,last=height.size()-1;
        while(first < last ) {
            maxarea = max(maxarea,min(height[first] , height[last]) * (last - first));
            if (height[first] <height[last]) first+=1;
            else last-=1;
        }
        return maxarea;
    }
};


int main( ) {
    vector<int>height {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout<<s.maxArea(height);
    return 0;
}