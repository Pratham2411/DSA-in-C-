// Give a maze(with rows and columns). Print the no of ways you can reach from one end to other. 
// You can either go down or right
#include<iostream>
using namespace std;
void ways(int sr,int sc, int er, int ec, string s){  
    if(sr>er|| sc>ec) return;
    if(sr==er&& sc==ec){
        cout<<s<<endl;
        return;
    }     
    ways(sr,sc+1,er,ec,s+'R');
    ways(sr+1,sc,er,ec,s+'D');
    
   

}

int main(){ 
        
   ways(1,1,3,3,"");

}