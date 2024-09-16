// count digits of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter number :";
    cin>> n;
    int count = 0;
    int a = n;
    while(n>0){
        n/=10;
        count++;
    }
    if (a==0) cout<<"No of Digits in n is 1";
   else cout<<"No of Digits in n is"<<" "<<count;
}