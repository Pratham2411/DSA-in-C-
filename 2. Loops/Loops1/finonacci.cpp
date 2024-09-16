// Print the nth fibonacci number
#include<iostream>
using namespace std;
int main(){
     int n;
    int a =1;
    int b =1;
    int sum =0;
    cout<< "Enter a number :";
    cin>> n;
  for(int i=1; i<=n-2;i++){
    sum = a+b;
    a = b;
    b = sum;
  }
  cout<<b;
}