// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// Syntax of binary search

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int lo=0;
//         int hi = nums.size()-1;
//         while(lo<=hi){
//             int mid = (hi+lo)/2; // (lo+lo+hi-l0)/2 isse error nhi aayega i.e. lo+ (hi-lo)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]>target) hi=mid-1;
//             else lo = mid+1;

//         }
//         return -1;
//     }
// };