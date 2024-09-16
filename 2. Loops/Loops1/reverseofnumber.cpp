#include<iostream>
using namespace std;
int main(){
int n;
    cout<< "Enter number :";
    cin>> n;
    int reverse = 0;
    while(n>0){
        reverse = reverse*10; // r = r*10
        reverse+= n%10;       // r+=last digit
        n/=10;
    }
    cout<< "Reverse is"<<" "<<reverse;

}
    