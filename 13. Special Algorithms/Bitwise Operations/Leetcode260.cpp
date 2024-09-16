// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order

// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> final(2);
//      // Phle sbka XOR kro
//      int res =0;
//      for(int i=0;i<n;i++) res = res^arr[i];
//      // Jo result aaya uski koi ek setbit pakad lo
//      // Us no ka 1 se and kro (1 ki kewal last bit set hoti hai)
//      int temp =res;
//      int k =0; // wo phli bit position jo 1 hai
//      while(true){
//         if((temp & 1)==1){
//             break;
//         }
//         temp = temp>>1; 
//         k++;
//      }
//    // Jinki kth bit set hai unka XOR lo 
//    int retval =0; 
//    for(int i=0;i<n;i++){
//       int num=arr[i];
//       if(((num>>k)&1)==1)  retval^=num; // ek no ki kth bit set nhi hogi
//    } 
//    final[0] = retval;
//   res = retval^res;
//   final[1] = res;
//   return final;
//     }
// };