// Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
// Example 1:
// Input: c = 5
// Output: true
// Explanation: 1 * 1 + 2 * 2 = 5

// class Solution {
// public:

 // code 2 snippet
//  bool is perfect square(int n){
//     in t root = sqrt(n);
//     if(root*root==n) return true;
//     else return false;
//  }

//     bool judgeSquareSum(int c) {

// code 1
//         long long i=0;
//         long long j= sqrt(c);
//         while(i<=j){
//             if(i*i +j*j==c) return true;
//             else if(i*i +j*j>c) j--;
//             else i++;
//         }
//         return false;

// code 2
//    int x=0;
//    int y=c;
//    while(x<=y){
//     if(isPerfectSquare(x) && isPerfectSquare(y) ) return true;
//     else if(!isPerfectSquare(y)) {
//         y = (int) sqrt(y)*  (int) sqrt(y);
//         x = c-y;
//     }
//     else {
//         x = ( (int) sqrt(y)+1 )*  ( (int) sqrt(y)+1 );
//         xy= c-x;
//     }
//    }
//    return false;



//     }
// };