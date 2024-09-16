// Print subset of an Array
#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,int idx,vector<int> ans ){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<< endl;
        return;
    }
    subset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    subset(arr,n,idx+1,ans);    
}

int main(){
 int arr[]= {1,2,3};  
 int n = sizeof(arr)/4;
  vector<int> v;
  subset(arr,n,0,v);
}