// Generate all binary strings of length n without consecutive 1's.
#include<iostream>
#include<vector>
using namespace std;
void print(int n, string s){
     if(n==s.size()){
        cout<<s<<endl;
        return;
     }
     if(s==""||s[s.size()-1]=='0'){
        print(n,s+'0');
       print(n,s+'1');
     }
     else print(n,s+'0');    
}
int main(){
   int n =4;
  print(n,"");
}