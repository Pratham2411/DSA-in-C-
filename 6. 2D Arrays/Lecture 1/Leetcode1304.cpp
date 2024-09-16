// Given an integer n, return any array containing n unique integers such that they add up to 0.
// Input: n = 5
// Output: [-7,-1,1,3,4]
// Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].

// class Solution {
// public:
//     vector<int> sumZero(int n) {
//         vector<int> arr(n,0);
//         int a=1;   
//         if(n%2!=0) n--;
//         for(int i=0;i<n;i+=2){
//            arr[i] =a;
//          arr[i+1] = -a;
//            a++;
//         }
//         return arr;
//     }
// };