// Print the max value in array using recursion
#include<iostream>
#include<climits>
using namespace std;
void max(int arr[],int n,int idx, int MAX){ 
    if(idx==n) {
        cout<<MAX;
        return;
    }
   if(MAX<arr[idx]) MAX = arr[idx];
   max(arr,n,idx+1,MAX);
}
int max2(int arr[],int n,int idx){ 
    if(idx==n) return INT_MIN;
    return max(arr[idx],max2(arr,n,idx+1));
}

int main(){
    
     int arr[] ={1,2,7,6,5};
    int n = sizeof(arr)/4;
  //   max(arr,n,0,INT_MIN);
   cout<<max2(arr,n,0);
  
}