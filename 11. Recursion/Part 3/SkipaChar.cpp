//Skip all the occurance of a charater in a string
#include<iostream>
using namespace std;
   void remove(string ans, string orignal,int idx){
       if(idx==orignal.size()){
        cout<<ans;
        return;
       }
        char ch=orignal[idx];
        if(ch=='a') remove(ans,orignal,idx+1);  // substring
        else remove(ans+ch,orignal,idx+1); 
   } 

int main(){
    string str="Pratham Raj";
    // string s="";
    // for(int i=0;i<str.size();i++){
    //     if(str[i]!='a') s+=str[i];
    // }
    // cout<<s;
    remove("",str,0);
}