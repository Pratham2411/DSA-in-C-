#include<iostream>
using namespace std;
void swap(int a, int b){
a = a+b;
b = a-b;
a = a-b;
 cout<<a<<" "<<b;
}



int main(){
int a;
cout<< "Enter a ";
cin>> a;
int b;
cout<< "Enter b ";
cin>> b;
// int temp = a;  // using extra variable
//  a =b;
//  b=temp;
//  cout<<a<<endl<<b;
   swap(a,b);
  
}