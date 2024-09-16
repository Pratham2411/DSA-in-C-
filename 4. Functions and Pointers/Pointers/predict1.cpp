#include<iostream>
using namespace std;
int main(){
int a =15;
int *ptr = &a;
//int b= ++(*ptr);  // 16
int b = (*ptr)++;     // 15
cout<< a<<" "<< b;


}