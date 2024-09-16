// Print sum from 1 to n (return type)
#include<iostream>
using namespace std;
 int sum(int n){
    if(n==1) return 1;
    
     n+= sum(n-1);
     return n;
    
}

int main(){
    int n;
  cout<<"Enter n:";
  cin>> n;
 
   cout<< sum(n);

}