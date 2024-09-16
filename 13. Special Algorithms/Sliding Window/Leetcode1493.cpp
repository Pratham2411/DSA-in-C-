// Given a binary array nums, you should delete one element from it.
// Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.
// Example 1:
// Input: nums = [1,1,0,1]
// Output: 3
// Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.
// Example 2:
// Input: nums = [0,1,1,1,0,1,1,0,1]
// Output: 5
// Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].

// Same like 1004. k =1, return maxlen-1;

// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//      int n = nums.size();
//      int zeropos = -1;
//      int i =0, j= 0, maxlen =0;
//      int count =0;
//      while(j<n){
//         int prev = zeropos;
//         if(nums[j]==0){
//             count++;
//             zeropos =j;
//         }
//         if(count<=1) j++;
//         else{
//             maxlen= max(maxlen,j-i);
//             i = prev+1;
//             count--;
//             j++;
//         }
//      }
//      maxlen= max(maxlen,j-i);
//      return maxlen-1;
//     }
// };