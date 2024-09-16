// You are given a 0-indexed two-dimensional integer array nums.
// Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0
// class Solution {
// public:
//    bool isPrime(int n){
//     if(n==1) return false;
//    for(int i =2;i<=sqrt(n);i++){ // Optimised O(root n)
//     if(n%i==0) return false;
//    }
//    return true;
// }
//     int diagonalPrime(vector<vector<int>>& nums) {
//         int k = nums.size();
//         int maxp = 0;
//         for(int i =0;i<k;i++){
//            if(isPrime(nums[i][i])) maxp = max(maxp,nums[i][i]);
//            if(isPrime(nums[i][k - i - 1]))  maxp = max(maxp, nums[i][k - i - 1]); 
//         }
//         return maxp;
//     }
// };