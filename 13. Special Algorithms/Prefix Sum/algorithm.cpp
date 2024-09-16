
#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,0,3,-5,2,-1};
    int n = sizeof(arr)/4;

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Prefix sum
 
    for(int i=1;i<n;i++){
       arr[i]+=arr[i-1];
    }
    // Sum(a->b) = arr[b] - arr[a-1] 

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}