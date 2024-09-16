// Given an integer n, find the maximum power of two than is smaller than n.
// 2^x ke binary me ek 1 ke alwawa sb 0 hote h
// Last iteration of Brain kalger algorithm will give the ans
#include<iostream>
using namespace std;
int find(int n){
    int temp =0;
    int count =0;
    while(n>0){
        count++;
       temp =n;
        n = (n&(n-1));
     
    }
    return temp;
}
int find2(int n){
   n =n|(n>>1);
   n =n|(n>>2);
   n =n|(n>>4);
   n =n|(n>>8);
   n =n|(n>>16);  // For a 32 bit number
    return (n+1)>>1;
}
int main(){
   int n =453;
  cout<<find(n)<<endl;
  // For just greater than n: Multiply the answer by 2
  // Approach 2 : Har bit ko 1 bna do using right shift and or operator : no will become 2^(max.power+1)-1
  cout<<find2(n);
}