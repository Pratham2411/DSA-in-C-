#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n =INT_MAX;
   //   cout<<(n*n)%5;
  // (a+b)%c = (a%c + b%c)%c
  // (a*b)%c = ((a%c)*(b^c))%c
  cout<<((n%5)*(n%5))%5;
  // (a-b)%c = ((a%c - b%c) + c)%c

  // Note: Modulo the result by 10^9 +7
}