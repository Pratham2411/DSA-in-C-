// Given an array of positive integers nums, return the number of distinct prime factors in the product of the elements of nums
// Input: nums = [2,4,3,7,10,6]
// Output: 4
// Explanation:
// The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 25 * 32 * 5 * 7.
// There are 4 distinct prime factors so we return 4.

// class Solution {
// public:
//        void fillseive( vector<bool>& seive){
//      int n = seive.size()-1;
//      for(int i =2;i<=sqrt(n);i++){
//         for(int j = i*2;j<=n;j+=i){
//             seive[j] =0;            // Making all composite 0
//         }
//      }
//    }
//     int distinctPrimeFactors(vector<int>& nums) {
//         // Max elements nikal ke use phle ke prime factors note kar lo(seive bna ke)
//        // Kya ye numbers array ke elements me aa rhe hai ?
//       int n = nums.size();
//       int mx =-1;
//       for(int i=0;i<n;i++){
//         mx = max(mx,nums[i]);
//       }
//       vector<bool> seive(mx+1,1);
//       if(mx+1>0) seive[0]=0; 
//       if(mx+1>1) seive[1]=0;
//       fillseive(seive);
//     vector<int> primes;
//    for(int i=2;i<=mx;i++){
//     if(seive[i]==1) primes.push_back(i);
//    }
//    vector<bool> taken(primes.size(),0);
//    for(int i=0;i<nums.size();i++){
//      int ele = nums[i];
//       for(int j=0;j<primes.size();j++){
//         if(primes[j]>ele) break;
//         if(ele%primes[j]==0) taken[j]=1;
//       }
//    }
//    int count =0;
//    for(int i =0;i<taken.size();i++){
//     if(taken[i]==1) count++;
//    }
//    return count;
//     }
// };