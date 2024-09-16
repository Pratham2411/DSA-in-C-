// You are given the customer visit log of a shop represented by a 0-indexed string customers consisting only of characters 'N' and 'Y':

// if the ith character is 'Y', it means that customers come at the ith hour
// whereas 'N' indicates that no customers come at the ith hour.
// If the shop closes at the jth hour (0 <= j <= n), the penalty is calculated as follows:

// For every hour when the shop is open and no customers come, the penalty increases by 1.
// For every hour when the shop is closed and customers come, the penalty increases by 1.
// Return the earliest hour at which the shop must be closed to incur a minimum penalty.

// Note that if a shop closes at the jth hour, it means the shop is closed at the hour j
// Input: customers = "YYNY"
// Output: 2
// Input: customers = "NNNNN"
// Output: 0
// Input: customers = "YYYY"
// Output: 4

// class Solution {
// public:
//     int bestClosingTime(string customers) {
//         int  n = customers.size();
      // Penelty = no of 'Y'>=n + no of N<"n"
      // Y ka suffix sum + N ka prefix sum
//       vector<int> pre(n+1);
//       int noN =0;
//       pre[0] =0;
//       for(int i=0;i<n;i++){
//         if(customers[i]=='N') {
//             pre[i]=noN;
//             noN++;            
//         }
//         else pre[i]=noN;
//       }
//       pre[n]=noN;  
//     int noY=0;
//     for(int i=n-1;i>=0;i--){
//        if(customers[i]=='Y'){
//         noY++;
//         pre[i]+=noY;
//        }
//        else pre[i]+=noY;
//     }
//     int minp = INT_MAX;
//     for(int i =0;i<n+1;i++){
//         if(pre[i]<minp) minp = pre[i];
//     }
//      for(int i =0;i<n+1;i++){
//         if(pre[i]==minp) {
//             return i;
//             break;
//         }
//     }
//     return 0;
//     }
// };