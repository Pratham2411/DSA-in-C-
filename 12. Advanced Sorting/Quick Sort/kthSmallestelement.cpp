// Quick Select
// WAP to find kth smallest element in an array using Quick sort
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
     swap(arr[(si+ei)/2], arr[pivotIdx]);  
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

int quickselect(int arr[], int si, int ei,int k){
   int pi=partition(arr,si,ei);
   if(pi+1==k) return arr[pi];
   else if(pi+1<k) return quickselect(arr,pi+1,ei,k);
   else return quickselect(arr,si,pi-1,k);

}
int main(){
    int arr[]= {5,1,8,2,3,7,6,3,4};
      int n = sizeof(arr)/4;
      int k = 3;
     cout<<quickselect(arr,0,n-1,k);
}