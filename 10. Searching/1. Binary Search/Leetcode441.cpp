// You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

// Given the integer n, return the number of complete rows of the staircase you will build.

class Solution {
public:
    int arrangeCoins(int n) {
       long long lo =1;
       long long hi = n;
       while(lo<=hi){
        long long k = lo +(hi-lo)/2;
        long long m= k*(k+1)/2;
        if(m==n) return(int) k;
        if(m>n) hi = k-1;
        else lo = k+1;
       } 
       return(int) hi;
    }
};