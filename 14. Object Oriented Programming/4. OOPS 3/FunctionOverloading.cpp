// Polymorphism : Ek naam, alag alag kaam
// Compile Time : Function Overloading
// Run time :  Cnstructor overloading, Overriding
// Same name ke 2 function/constructor with differnt parameters or data types
// Overloading is not done by changing just return type and keeping same parameters
#include<iostream>
using namespace std;
class Loading{  
   public:       
  void sum(int a, int b){
    cout<<a+b<<endl;
  }
  void sum(int a, int b, int c){
    cout<<a+b+c<<endl;
  }
};


int main(){
  Loading a;
  a.sum(7,5);
  a.sum(9,5,2);
}