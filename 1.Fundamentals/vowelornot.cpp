#include<iostream>
using namespace std;
int main(){
     char ch;
    cout<<"Enter a character"; 
       cin>>ch;
    //int ascii = (int)ch;
   if (ch>=97&&ch<=122|| ch>=65&&ch<=90){
    cout<< "Given charecter is an alphabet";
   }
   else {
    cout<< "Given charecter is not an alphabet";
   } 

}
    
    
    
    