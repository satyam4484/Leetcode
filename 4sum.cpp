#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> v;
        if(nums.size()<4){
            return v;
        }
        sort(nums.begin(), nums.end());
        // set<vector<int>> s;
        for (int i = 0; i < nums.size() - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                if (j > 1 && nums[j] == nums[j -1] && (j-i)>1)
                {
                    continue;
                }
                int st = j + 1;
                int e = nums.size() - 1;
                while (st < e)
                {
                    if (nums[i] + nums[j] + nums[st] + nums[e] == target)
                    {
                        v.push_back({nums[i], nums[j], nums[st], nums[e]});
                while (st + 1 < e - 1 && nums[st] == nums[st+ 1] && nums[e] == nums[e - 1])
                        {
                            st++;
                            e--;
                        }
                        st++;
                        e--;
                    }
                    else if (nums[i] + nums[j] + nums[st] + nums[e] < target)
                    {
                        st++;
                    }
                    else
                    {
                        e--;
                    }
                }
            }
        }

        return v;
    }
};


int main( ) {
    vector<int>nums {1,0,-1,0,-2,2};
    int target = 0;

    Solution s;
    vector<vector<int>>ans = s.fourSum(nums,target);

    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[0].size();j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}