// Give a maze(with rows and columns). Claculte the no of ways you can reach from one end to other. 
// You can either go down or right
#include<iostream>
using namespace std;
int ways(int sr,int sc, int er, int ec){  
    if(sr>er|| sc>ec) return 0;
    if(sr==er&& sc==ec) return 1;    
    int rightways= ways(sr,sc+1,er,ec);
    int downways= ways(sr+1,sc,er,ec);
    int Totalway= rightways + downways;
   return Totalway;

}

int main(){ 
         
   cout<<   ways(1,1,3,3);
}