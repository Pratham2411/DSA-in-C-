// Find the no of ways in which a person can climn a staircase with n steps if he can take only one or two steps at a time
#include<iostream>
using namespace std;
int ways(int n){  
    if(n==1) return 1;
    if(n==2) return 2;
    return ways(n-1)+ways(n-2);
}

int main(){  
      int n= 5;     
   cout<<   ways(n);
}