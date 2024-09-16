#include<iostream>
#include<vector>
using namespace std;
// Partition algorithm
int partition (int arr[], int si, int ei){
     int pivotElement =arr[(si+ei)/2]; // Random pivot element reduces T.C.
     int count =0;
     for(int i =si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
     }
     int pivotIdx = count+si;
     swap(arr[(si+ei)/2], arr[pivotIdx]);  // updated
     int i = si;
     int j = ei;
     while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement) {
            swap(arr[i],arr[j]);
            i++; j--;
        }
     }
     return pivotIdx;
}
void quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
   int pi=partition(arr,si,ei);
   quicksort(arr,si,pi-1);
   quicksort(arr,pi+1,ei);

}
int main(){
    int arr[]= {5,1,8,2,7,6,3,4,-8};
      int n = sizeof(arr)/4;
      vector<int> v(arr,arr+n);
      for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     quicksort(arr,0,n-1);      // Time: O(nlogn) Space: O(logn)
     for(int i =0;i<n;i++){    // Unstable sort
        cout<<arr[i]<<" ";
     } 
     // Advantages:
     // Internal sorting uses a variation of quick sort
     // Fastest
     // Quick select(Type of problems)

}