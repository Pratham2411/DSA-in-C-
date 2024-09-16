// Make a function that prints numbers freom n to 1
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case
    cout<<n<<" ";  // work
    print(n-1);   // call
   
}

int main(){
    int n;
  cout<<"Enter n:";
  cin>> n;
   print(n);

}