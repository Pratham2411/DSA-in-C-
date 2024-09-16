// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums
// Input: nums = [1,2,0]
// Output: 3
// Famous Interveiw Question
// Negative no mile to skip kar do

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//           int n = nums.size();
//          int i =0;
//      while(i<n){
//         if(nums[i]<0) i++;
//        //  int correctidx = nums[i]-1;
//        else if( nums[i]<=0||nums[i]>n|| nums[i]==i+1 ||  nums[nums[i]-1] ==nums[i]) i++;
//        else  swap(nums[i],nums[nums[i]-1]);
//     }   
//      for(int i =0;i<n;i++){
//         if(nums[i]!=i+1 ) return i+1;
//      } 
//      return n+1; 
//     }
// };
