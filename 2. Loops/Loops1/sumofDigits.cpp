#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter number :";
    cin>> n;
    int a = n;
    int sum = 0;
    while(n>0){
        sum = sum+ n%10; // n%10 gives last digit
        n = n/10;
    }
    if(a==0) cout<< " Sum of Digits is 0";
    else cout<< " Sum of digits is"<<" "<<sum;
}