// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> v;
//         int n = nums.size();
//          int i =0;
//      while(i<n){
//         int correctidx = nums[i]-1;
//        if( nums[correctidx] ==nums[i] ) i++;
//        else  swap(nums[i],nums[correctidx]);
//     }   
//      for(int i =0;i<n;i++){
//         if(nums[i]!=i+1 ) v.push_back(i+1);
//      }  
//      return v; 
//     }
// };