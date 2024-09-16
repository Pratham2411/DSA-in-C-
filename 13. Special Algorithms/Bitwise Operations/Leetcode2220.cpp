// Minimum bit flips to convert one number to another
class Solution {
public:
  
    int minBitFlips(int start, int goal) {
        // Detect how many bits are different
        // XOR gives 1 only for different beats
        int n = start^goal;   
       return __builtin_popcount(n);
    }
};

class Solution {
public:
   int count(int num){
    int ans =0;
    while(num>0){
        if(num%2!=0) ans++;
        num/=2;
    }
    return ans;
}
    int minBitFlips(int start, int goal) {
        // Detect how many bits are different
        // XOR gives 1 only for different beats : Count them(Setbit problem)
        // Ya phir & lene se diff no 0 ho jayenge 
        int n = start^goal;   
       return count(n);
    }
};