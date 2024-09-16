// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// class Solution {
// public:
//     void moveZeroes(vector<int>& arr) {
//         int i =0;  // travel on zeroes
//         int j=0;    // travel on non zeroes
//         int n = arr.size();
//         while(j<n && i<n){
//             if(arr[i]!=0){
//                 i++;
//                 j++;
//             }
//             else if(arr[j]==0 ) j++;
//             else if (arr[i]==0) swap(arr[i],arr[j]) ;            
//         }
//     }
// };

