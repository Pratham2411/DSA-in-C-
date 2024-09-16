// Write a function to calculate the nth fibonacci using recursion
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    return  fibonacci(n-1) + fibonacci(n-2) ;  //)(2^n)

}

int main(){
      int n;
      cout<<"Enter n: ";
      cin>> n;
   cout<<   fibonacci(n);
}