// Update all even indices of a string with 'a'
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s= "pratham";
   for(int i=0;s[i]!=0;i++){
         if(i%2==0) s[i]= 'a';
        
    }
    cout<< s;
    // Strings can be updated in C++(Java me nhi hota ye!)
    
}