// You are given an integer array nums of size n.
// Consider a non-empty subarray from nums that has the maximum possible bitwise AND.
// Return the length of the longest such subarray.

// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//           int ans = 0, i = 0, j = 0, n = nums.size(),k=-1;
//         while(i<n){
//             j = i;
//             while(j<n&&nums[i]==nums[j]){
//                 j++;
//             }
//             if(k==-1 || nums[i]>k){
//                 k = nums[i];
//                 ans = j-i;
//             }
//             else if(nums[i]==k){
//                 ans = max(ans,j-i);
//             }
//             i = j;
//         }
//         return ans;
//     }
// };