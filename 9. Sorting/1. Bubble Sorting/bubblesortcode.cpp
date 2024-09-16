#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,4,6,3,2,1};
    int n=6;
// bubble sort
  
    // for(int i=0;i<n-1;i++){// n-1 passes
    //  // traverse
    //  for(int j=0;j<n-1-i;j++){
    //     if(arr[j]>arr[j+1]){
    //         swap(arr[j],arr[j+1]);
    //     }
    //  }
    // }
  
  // Optimised bubble sort   
  for(int i=0;i<n-1;i++){// n-1 passes
     // traverse
     bool flag =true; // sorted
     for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = false;
        }
     }
     if(flag==true) break; // Swap nhi hua
    }
 for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
 }
 // For a already sorted array time complexity of bubble sort os o(n)
 // Bubble sort is a stable sort(order of similar elements do not change)

   
}