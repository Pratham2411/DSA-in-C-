// Print all subsets of a string with unique charecters
#include<iostream>
#include<vector>
using namespace std;
void subset(string ans, string orignal, int idx,vector<string> &v){
    if(idx==orignal.size()){
       // cout<<"("<<ans<<")"<<endl;
        v.push_back(ans);
        return;
       }
        subset (ans+orignal[idx],orignal,idx+1,v);
        subset (ans,orignal,idx+1,v);     
}

int main(){
    string str= "abc";
    vector<string> v; // For storing
    subset("",str,0,v);
  for(string ele: v){
    cout<<"("<<ele<<")"<<endl;
  }

}