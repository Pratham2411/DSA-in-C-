// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator

// class Solution {
// public:
//     int mySqrt(int x) {
//         int lo=0;
//         int hi=x;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//             long long m= (long long) mid;
//             long long y= (long long) x;
//             if((m*m)>y) hi= mid-1;
//             else lo=mid+1;

//         }
//         return hi;
//     }
// };