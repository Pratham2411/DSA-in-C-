#include<iostream>
using namespace std;

int main(){
// int x=7;

// int *ptr = &x;

// cout<< ptr<<endl;
// ptr= ptr+1;       // 4 byte ahead(in int)
//    cout<< ptr<<endl;

//   int x=7;

// int *ptr = &x;

// cout<< *ptr<<endl;
// ptr++;       
//    cout<< *ptr<<endl;
int x=7;

int *ptr = &x;

 cout<< *ptr<<endl;
 *ptr = *ptr+1;       // or (*ptr)++
   cout<< *ptr<<endl;

}