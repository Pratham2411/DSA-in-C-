// Given an integer n, return the number of prime numbers that are strictly less than n
// class Solution {
// public:
   
//    void fillseive( vector<bool>& sieve){
//      int n = sieve.size()-1;
//      for(int i =2;i<=sqrt(n);i++){
//         for(int j = i*2;j<=n;j+=i){
//             sieve[j] =0;            // Making all composite 0
//         }
//      }
//    }
//     int countPrimes(int n) {
//       // Seive of eratosthenesis
//      //Agr koi no prime hai to uske saare factors composite honge
//      // Space O(n+1) ek array banega (boolean)
         // Space O(n*log(log n))
//      if(n<=2) return 0;
//      n = n-1;  // we need numbers just less than n
//     int count =0;
//     vector<bool> sieve(n+1,1); // 1 means prime
//     fillseive(sieve);
//     sieve[0] =0;
//     sieve[1]=0;
//     for(int i =2;i<=n;i++){
//         if(sieve[i]==1) count++;
//     }
// return count;
        
//     }
// };