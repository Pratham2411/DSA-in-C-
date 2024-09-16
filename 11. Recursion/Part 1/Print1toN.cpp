// Make a function that prints numbers freom 1 to n
#include<iostream>
using namespace std;
// Use of extra parameter
// void print(int i,int n){
//     if(i>n) return;
//    cout<<i<<endl;
//    print(i+1,n);
   
// }
// Phle call then print
 void print(int n){
    if(n==0) return;  // base case
    print(n-1);     // call
       cout<<n<<" ";  // work
   
}

int main(){
    int n;
  cout<<"Enter n:";
  cin>> n;
   print(n);

}