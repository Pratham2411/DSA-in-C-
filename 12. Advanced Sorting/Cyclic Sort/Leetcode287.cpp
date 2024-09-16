// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int  n= nums.size();
//          int i = 0;
//          while(i<n){
//             int correctIdx= nums[i];
//             if(nums[correctIdx]==nums[i]) return nums[i];
//             else swap(nums[i],nums[correctIdx]);
//          }
//          return -1;
//     }
// };