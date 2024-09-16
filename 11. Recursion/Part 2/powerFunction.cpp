// Power function (Logarithmic)
#include<iostream>
using namespace std;
int power(int x, int n){  // O(logn)
    if(n==0) return 1;
    if(n==1 ) return x;
    if(n%2==0) { 
      int ans = power(x,n/2);  // avoid multiple similar calls
      return ans*ans;
    }
    else {
        int ans = power(x,n/2);
        return ans*ans*x;      // Maths
    }
  
}

int main(){
      int x=3;
      int n= 10;
      
   cout<<   power(x,n);
}