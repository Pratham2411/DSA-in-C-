// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

// suffix sum (ulta prefix sum chalao)

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();     
//        vector<int> pre(n);
//        vector<int> suf(n);
//          // prefix product array
//        int product =1;
//        for(int i=0;i<n;i++){
//         pre[i] = product;
//         product*=nums[i];
//        }
//         // suffix product array
//        product = 1;
//         for(int i=n-1;i>=0;i--){
//         suf[i] = product;
//         product*=nums[i];
//        }
//         // then multiply both
//        for(int i=0;i<n;i++){
//        pre[i] =pre[i]*suf[i];
        
//        }

//   return pre;

//     }
// };