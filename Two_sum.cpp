#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v{0,0};
        if(nums.size()==0)
            return v;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v[0]=i;
                    v[1]=j;
                    break;
                }
            }
        }
        return v;
    }
};

int main() {
    vector<int>nums{2,7,11,15};
    int target = 9;
    Solution s;
    vector<int>ans = s.twoSum(nums,target);

    // display the ans 
    for(auto i:ans) {
        cout<<i<<" ";
    }
    return 0;
}