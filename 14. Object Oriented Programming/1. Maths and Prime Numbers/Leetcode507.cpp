// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
// Given an integer n, return true if n is a perfect number, otherwise return false.

// class Solution {
// public:
//     bool checkPerfectNumber(int n) {
//         if(n==1) return false;
//         int sum = 1;
//         for(int i =2;i<sqrt(n);i++){
//         if(n%i==0)
//              sum+=i;       
//     } 
//     for(int i =sqrt(n);i>=2;i--){
//         if(n%i==0)
//              sum+=n/i;      
//     } 
//     if(sum==n) return true;
//     return false;
//     }
// };