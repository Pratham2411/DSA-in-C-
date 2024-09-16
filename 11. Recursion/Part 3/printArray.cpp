// Print all the elements of an array using recursion
#include<iostream>
#include<vector>
using namespace std;
void print(int arr[], int n,int idx){
    if(idx==n)return; 
     cout<<arr[idx]<<" ";           
     print(arr,n,idx+1);   
}
void print2(vector<int> &v,int idx){
    if(idx==v.size())return; 
     cout<<v[idx]<<" ";           
     print2(v,idx+1);   
}

int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/4;
   print(arr,n,0);
    // for(int ele :arr){  // for each loop
    //     cout<<ele<<" ";
    // }
    vector <int> v(n);
    for(int i=0;i<n;i++){
        v[i] = arr[i];
    }
    print2(v,0);
}