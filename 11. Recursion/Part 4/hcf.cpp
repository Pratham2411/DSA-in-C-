// Calculate the greatest common divisor of two numbers
// Euclid method(long division) O(log(a+b))
#include<iostream>
#include<vector>
using namespace std;
int hcf(int a,int b){
    if(a==0) return b;
    if(a==1) return 1;
     return hcf(b%a,a); 
}
int main(){
 int a =24;
 int b = 60;
  cout<<hcf(a,b);  
 
}