#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>vt;
        if(nums.size()<3){
            return vt;
        }
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for (int i = 0; i < nums.size(); i++)
        {
            int start=i+1;
            int end=nums.size()-1;
            while (start<end)
            {
                
                if (nums[i]+nums[start]+nums[end]==0)
                {
                    s.insert(vector<int>{nums[i],nums[start],nums[end]});
                    start++;
                    end--;
                }
                else if (nums[i]+nums[start]+nums[end]<0)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        vector<vector<int>>p(s.begin(),s.end());
        return p;
    }
};


int main( ) {
    vector<int>nums {-1,0,1,2,-1,-4};
    Solution s;
    vector<vector<int>>ans = s.threeSum(nums);

    // display the vector

    for(auto i:ans) {
        for(auto j:i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}