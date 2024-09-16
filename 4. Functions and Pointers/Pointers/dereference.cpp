#include<iostream>
using namespace std ;
int main(){
int x= 15;
int *p = &x;
cout<< *p<<endl;   // * means visit the adress stored at p and print the value presnt there.
*p = 20;              // * is called dereference operator
cout<< x;
}