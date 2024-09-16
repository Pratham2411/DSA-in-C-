// Subarray : SW, PreSum, SW+ Pre sum
// Largest/ smallest sum
// Substring
// Maximum sum Subarray of size k
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[] ={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/4;
    int k =4;
    // int maxsum= INT_MIN;
    // int idx =-1;
    // for(int i =0;i<=n-k;i++){
    //     int sum =0;
    //     for(int j =i;j<i+k;j++){
    //        sum+=arr[j];
    //     }
    //     if(sum>maxsum) { idx = i; maxsum = sum;}
    // }
    // cout<< maxsum<<endl<<idx;
    // Time complexity : O(n*k)
    // Sliding window algorithm
    // Current window sum = prev window sum + last element(curr window) - first element(prev window)
   // O(n)
    int sum = 0;
    for(int i =0;i<k;i++){
       sum += arr[i];
    }
    int maxsum= INT_MIN;
    int i =1;
    int j = k;
    int maxidx=0;
    while(j<n){
      
      sum +=  arr[j]-arr[i-1];
      if(maxsum<sum){
        maxsum = sum;
        maxidx = i;
      }
      
    i++;
    j++;    
    }
  cout<< maxidx<<endl<<maxsum;
}