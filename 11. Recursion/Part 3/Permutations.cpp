// Find all the possible permutations of an string of unique elements
// Variable calls
#include<iostream>
#include<vector>
using namespace std;
 void perm(string ans,string orignal){
    if(orignal ==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<orignal.size();i++){
        char ch = orignal[i];
        string left = orignal.substr(0,i);
        string right = orignal.substr(i+1);
        perm(ans+ch,left+right);
    }

 }


int main(){
    string str= "abc";
    
    perm("",str);
   //  cout<<str.substr(1,2); 1st index se 2 length ka string , 2 not written mtlb index 1 se saari string
  
}