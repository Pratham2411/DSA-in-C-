#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
for(int ele :arr){
    cout<<ele<<" ";    // For-each loop
   }
   cout<< endl;

// Selection Sort  O(n^2)
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minidx= -1;
        // Minimum element calculation
        for(int j=i;j<n;j++){
          if(arr[j]<min){
            min = arr[j];
            minidx=j;
          }          
        }
        swap(arr[i],arr[minidx]);       
    }
   for(int ele :arr){
    cout<<ele<<" ";    
   }
   cout<< endl;
}
// Stability : It is an unstable sort algorithm
// Use Cases: Cost of swapping(Less Swaps/n-1), Starting se k min elements out of n nikalne hai, size of array is small