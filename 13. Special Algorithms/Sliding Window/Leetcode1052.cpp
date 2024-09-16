// There is a bookstore owner that has a store open for n minutes. Every minute, some number of customers enter the store. You are given an integer array customers of length n where customers[i] is the number of the customer that enters the store at the start of the ith minute and all those customers leave after the end of that minute.

// On some minutes, the bookstore owner is grumpy. You are given a binary array grumpy where grumpy[i] is 1 if the bookstore owner is grumpy during the ith minute, and is 0 otherwise.

// When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise, they are satisfied.

// The bookstore owner knows a secret technique to keep themselves not grumpy for minutes consecutive minutes, but can only use it once.

// Return the maximum number of customers that can be satisfied throughout the day.
// Example 1:

// Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3
// Output: 16
// Explanation: The bookstore owner keeps themselves not grumpy for the last 3 minutes. 
// The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16

// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//         // Find the window that has most loss of satisfaction
//         // Sliding window algorithm
//         // Find the index of window with max. loss
//         int k = minutes;
//         vector<int> &arr = customers;
//         int n = arr.size();       
//         int prevloss = 0;
//         for(int i =0;i<k;i++){
//             if(grumpy[i]==1) prevloss+=arr[i];
//         }
//        int maxloss = prevloss;
//       int maxidx = 0;
//       int i = 1;
//       int j = k;
//       while(j<n){
//         int currloss = prevloss;
//          if(grumpy[j]==1) currloss += arr[j];
//          if(grumpy[i-1]==1) currloss -= arr[i-1];
//         if(maxloss<currloss){
//         maxloss = currloss;
//         maxidx = i;
//       }   
//       prevloss = currloss;  
//         i++;
//         j++;  
//       }
//       // Us window me 0 daal do
//       for(int i =maxidx;i<maxidx+k;i++){
//             grumpy[i] = 0;
//         }
//        int sum =0;
//         for(int i =0;i<n;i++){
//             if(grumpy[i]==0) sum+= arr[i];
//         } 
//         return sum;
//     }
// };