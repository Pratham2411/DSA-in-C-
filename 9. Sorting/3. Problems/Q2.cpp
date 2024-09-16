// Given an array of n distinct elements. Convert it into an array with numbers from 0 to n-1(0 for smallest element, n-1 for largest)
// Order of elements should not change
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
      int arr[]={19,12,23,8,16};
      int n=5;
      vector<int> v;
      for(int i=0;i<n;i++){
        v.push_back(arr[i]);
      }
      sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==v[j]){
                arr[i]=j;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }

}