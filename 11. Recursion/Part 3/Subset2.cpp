// Print the unique subsets of a string with repeated elements
#include<iostream>
#include<vector>
using namespace std;
void subset(string ans, string orignal,vector<string> &v,bool flag){
    if(orignal==""){
       // cout<<"("<<ans<<")"<<endl;
        v.push_back(ans);
        return;
       }
       char ch = orignal[0];
       if(orignal.length()==1){
          if(flag==true)  subset (ans+ch,orignal.substr(1),v,true);
           subset (ans,orignal.substr(1),v,true);   
           return;
       } 
         char dh = orignal[1];
         if(ch==dh){
           if(flag==true)   subset (ans+ch,orignal.substr(1),v,true);
             subset (ans,orignal.substr(1),v,false);   
         }
     else {
       if(flag==true)  subset (ans+ch,orignal.substr(1),v,true);
        subset (ans,orignal.substr(1),v,true);
     }     
}

int main(){
    string str= "aab";
    vector<string> v; // For storing
    subset("",str,v,true);
  for(string ele: v){
    cout<<"("<<ele<<")"<<endl;
  }

}
