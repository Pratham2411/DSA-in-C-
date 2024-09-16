// Give a maze(with rows and columns). Claculte the no of ways you can reach from one end to other. 
// You can either go down or right
#include<iostream>
using namespace std;
int ways(int m,int n){  
    if(m<1 || n<1) return 0;
    if(m==1&& n==1) return 1;    
    int rightways= ways(m,n-1);
    int downways=  ways(m-1,n);
    int Totalway= rightways + downways;
   return Totalway;
}

int main(){ 
         
   cout<<   ways(3,3);
}