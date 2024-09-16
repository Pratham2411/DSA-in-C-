#include<iostream>
using namespace std;
int main(){
    int a = 14; // a means divident
    int b = 3; // b is divisor
    int r; // r is remainder
    int q; // q is quotient
    q = a/b;
    r = a - b*q;
    cout<<r;
}
 // Keep changing values of a and b and get remainder of any division.
    // Made by Pratham.
    // You can also use int r= a%b; here percentage sign can directly find remainder.
    // you don`t have to introduce q.
   // This is called modulus operator