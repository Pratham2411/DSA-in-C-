#include<iostream>
#include<cmath>
using namespace std;

    
int main(){
    int n, i, a, bin;
    cout<<"Enter a number: ";
    cin>>n;
    i=0;
    bin=0;
    while(n>0){
        a=n%2;
        bin+= (a*(pow(10,i)));
        n=n/2;
        i++;
    }
    cout<<"Binary representation: "<<bin<<endl;
}

