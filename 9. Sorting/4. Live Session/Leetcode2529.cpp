// Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int n= nums.size();
//         int pos=0;
//         int neg=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]>0) pos++;
//             if(nums[i]<0) neg++;
//         }
//             return max(pos,neg);
//     }
// };