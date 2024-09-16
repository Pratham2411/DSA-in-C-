// Check if an array can be divide into two continious arrays such that sum of both parts is equal

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n = sizeof(arr)/4;

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Prefix sum
 
    for(int i=1;i<n;i++){
       arr[i]+=arr[i-1];
    }
    // arr[n-1]==2*arr[i]
 bool flag = false;
    for(int i =0;i<n;i++){
        if(arr[n-1]==2*arr[i]) {
            cout<<i<<" is the partition index";
            flag=true;
            break;     
    }}
  if(flag==false) cout<<"No such index exists";

}