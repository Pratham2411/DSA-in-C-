#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str ="Pratham Raj is a Superstar"; // Character array of size 12
    // cout<< str<<endl;
    // cout<< str[0];
    string s;
   // cin>> s;  // You can't give spaces as input
   
    // we use getline to tackle this problem
    getline(cin,s); // Ab aise lenge input
    cout<< s;
}