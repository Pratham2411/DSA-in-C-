// 1-2+3-4+...n
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<< "Enter number :";
    cin>> n;
  //  for(int i=1; i<=n;i++){
    //    if(i%2!=0) sum+= i;
      //  else sum-= i;
    //}

if(n%2==0) sum = -n/2;
else sum = -n/2+ n;
 cout<< " Sum is"<<" "<< sum;
}