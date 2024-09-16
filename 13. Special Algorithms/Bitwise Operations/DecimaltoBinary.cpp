// Right shift == division by 2
//5>>1 == 5/2
#include<iostream>
using namespace std;
string decimal_to_binary(int num){
    string res ="";
    while(num>0){
       if(num%2==0) { // even ki last bit 0 hoti h
        res = "0"+res; // prepend
       }
       else  res = "1"+res;
       num/=2; // num>>1;
    }
    return res;
}
int main(){
   int n =20;
   cout<< decimal_to_binary(n)<<endl;
}

// Note: x<<1 = x*2 x<<a = x*2^a  left shift
// x>>1 = x/2, x>>a = x/2^a  >> right shift
