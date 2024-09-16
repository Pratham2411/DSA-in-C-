// Given an array of size n+1 with integers from 0 to 1. Find the element oming twice

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  // M1:- brute force
//   int arr[]={6,3,2,4,1,7,1,5};
//   bool flag = false;
  //for(int i=0;i<arr.size()-1;i++){
//     for(int j=0;j<arr.size();j++){
//         if(arr[i]==arr[j]){
//             cout<<arr[i];
//             flag = true;
//             break;
//         }
//     }
//     if(flag==true) break;
//   }
// Time consuming
// Space Efficient
// M2
//  vector<int> check(8,0);
// Fill indices with one by moving each elament
// Time efficient
// Space consuming

// M3
// Sum of n nat. numbers
// int s1= 0;
// int n=arr.size()-1;
// for(int i=0;i<=n;i++){
        //   sum+=arr[i];
        // }
//  int s2= n*(n+1)/2;
// cout<< s1-s2;
 //  both time and space efficient

}