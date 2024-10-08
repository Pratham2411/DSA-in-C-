// Given an array of positive integers nums and a positive integer target, return the minimal length of a 
// subarray
//  whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
// Example 1:

// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint
// Input: target = 11, nums = [1,1,1,1,1,1,1,1]
// Output: 0

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         // Do not use sorting with sliding window
//        // Variable windows
//       int n = nums.size();
//       int i =0;
//       int j =0;
//       int minlen = INT_MAX;
//       int len;
//       int sum = 0;
//       while(j<n){
//        sum+=nums[j];
//        while(sum>=target){
//         len = j-i+1;
//         minlen = min(minlen,len);
//         sum-= nums[i];
//         i++;
//        }
//        j++;
//       }
//       if(minlen==INT_MAX) return 0;  
//       return minlen;
//     }
// };