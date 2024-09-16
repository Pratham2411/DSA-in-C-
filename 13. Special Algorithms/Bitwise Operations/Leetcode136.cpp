// Every element in an array appears twice except one. Find it.

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         // X^X =0 , X^0 = X
//         // XOR is commutative (order do not matter)
//         // sbka ek saath XOR kr denge to baaki sare elements 0 ho jayenge
//         int n=nums.size();
//         int res =0;
//        for(int i=0;i<n;i++){
//         res = res^nums[i];
//        }
//         return res;
//     }
// };