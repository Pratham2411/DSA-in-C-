// You are given a positive integer n.

// Continuously replace n with the sum of its prime factors.

// Note that if a prime factor divides n multiple times, it should be included in the sum as many times as it divides n.
// Return the smallest value n will take on.
// Example 1:
// Input: n = 15
// Output: 5
// Explanation: Initially, n = 15.
// 15 = 3 * 5, so replace n with 3 + 5 = 8.
// 8 = 2 * 2 * 2, so replace n with 2 + 2 + 2 = 6.
// 6 = 2 * 3, so replace n with 2 + 3 = 5.
// 5 is the smallest value n will take on.

// class Solution {
// public:
// int primeFactor(int n){
//     int sum=0;
//     for(int i=2;n>1;i++){
//         while(n%i==0){
//             sum=sum+i;
//             n=n/i;
//         }
//     }
//         return sum;
// }
//     int smallestValue(int n) {      
//     int sum=primeFactor(n);
//     if(sum == n)
//         return sum;
//     else
//         return smallestValue(sum); 
//     }
// };