// You are given an integer array nums of length n, and an integer array queries of length m.

// Return an array answer of length m where answer[i] is the maximum size of a subsequence that you can take from nums such that the sum of its elements is less than or equal to queries[i].

// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

// Example 1:

// Input: nums = [4,5,2,1], queries = [3,10,21]
// Output: [2,3,4]

// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//        // sort     
//        int n = nums.size();
//        int m = queries.size();
//        vector<int> ans(m);
//        sort(nums.begin(),nums.end());
//      // make nums prefix sum
//      for(int i= 1;i<n;i++){
//         nums[i]+=nums[i-1];
//      }
//      for(int i = 0;i<m;i++){
//         int len =0;
//        for(int j=0;j<n;j++){
//          if(nums[j]>queries[i]) break;
//           len++;
//        }
//        ans[i] = len;
//      }
//      return ans;
//     }
// };