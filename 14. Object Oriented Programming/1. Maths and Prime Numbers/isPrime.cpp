#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
   for(int i =2;i<=sqrt(n);i++){ // Optimised O(root n)
    if(n%i==0) return false;
   }
   return true;
}
int main(){
 int n = 23;
   cout<<isPrime(n);
   // sqrt(n) divides factors of a number in two halves
}