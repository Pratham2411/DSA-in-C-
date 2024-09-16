// Give a maze(with rows and columns). Print the no of ways you can reach from one end to other. 
// You can either go down or right
#include<iostream>
using namespace std;
void print(int sr,int sc, string s){  
    if(sr<1|| sc<1) return;
    if(sr==1&& sc==1){
        cout<<s<<endl;
        return;
    }     
    print(sr,sc-1,s+'R');
    print(sr-1,sc,s+'D');
    
}

int main(){ 
     
   print(3,3,"");

}