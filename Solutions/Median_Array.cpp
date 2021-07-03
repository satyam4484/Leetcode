#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>s;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
               {
                   s.push_back(nums1[i]);
                   i++;
               }
             else
               {
                   s.push_back(nums2[j]);
                   j++;
               }
        }
        while(i<nums1.size())
               {
                   s.push_back(nums1[i]);
                   i++;
               }
        while(j<nums2.size())
               {
                   s.push_back(nums2[j]);
                   j++;
               }
        int m=s.size();
        if(m%2!=0)
            return s[m/2];
        return (double)(s[m/2-1]+s[m/2])/2;
    }
};

int main( ) {
    vector<int>nums1{1,2}, nums2{3,4};
    Solution s;
    double ans = s.findMedianSortedArrays(nums1,nums2);
    cout<<ans<<endl;
    return 0;
}