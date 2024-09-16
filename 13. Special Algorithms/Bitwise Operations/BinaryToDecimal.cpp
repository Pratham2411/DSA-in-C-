// Applied on binary inputs
// Notations
// And  &
// OR | 
// Not ~
// XOR ^
// Conversion between binary(base2) and decimal(base 10)
// 1. Binary to decimal
// lsb : least signigicant bit(rightmost)
// msb : most signigicant bit(leftmost)
// Left Shift 1<<x = 2^x
// Q. Funtion to convert binary to decimal
#include<iostream>
using namespace std;
int binary_to_decimal(string &binary){
    int n = binary.size();
    int result =0;
    for(int i =n-1;i>=0;i--){
        char ch = binary[i];
       int num = ch -'0';
       result+= num*(1<<(n-i-1));
    }
    return result;
}
int main(){
   string s ="001101";
   cout<< binary_to_decimal(s)<<endl;
}