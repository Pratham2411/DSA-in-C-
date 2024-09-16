// Strings are basically character arrays
#include<iostream>
using namespace std;
int main(){
    // char str[]={'a','b','c','d','e'};
    // string ke end me ek null charater \0 humesa add hota
    // char str[5]={"abcd"};
    //  Anything under double quote is a string
    // for(int i=0;i<4;i++){
    //     cout<< str[i]<<" ";
    // }
  //  char str[]={'a','b','c','d','e','f'};
    //  for(int i=0;str[i]!='\0';i++){
    //     cout<<str[i]<<" ";
    //  }
    // Special method
    // cout<< str; // Note: Ye \0 tk hi print krta hai
    char str[]={'a','b','c','\0','d','e','f'};
       cout<< str;
       
    }