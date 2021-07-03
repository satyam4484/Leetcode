#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
        
        int min_diff = INT32_MAX;
        int c;
        for (int i = 0; i < nums.size()-2; i++)
        {
            int start = i + 1;
            int end = nums.size() - 1;
            while (start < end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                // cout<<sum<<" ";
                if (abs(target - sum) < min_diff )
                {
                    min_diff = abs(target-sum);
                    c=sum;
                }
                
                if (sum < target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
        return c;
    }
};



int main( ) {
    vector<int>nums{-1,2,1,-4};
    int target = 1;
    Solution s;
    cout<<s.threeSumClosest(nums,target);
    return 0;
}