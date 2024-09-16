#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){ 
    int i =0; // a
    int j =0;// b
    int k =0;// res
    while(i<a.size() && j<b.size()){
       if(a[i]<=b[j])  res[k++] = a[i++];     // k++; // i++;      
       else  res[k++] = b[j++];
    }
     if(i==a.size())
        while(j<b.size()) res[k++]=b[j++];  

     if(j==b.size())
        while(i<a.size()) res[k++]=a[i++];
}

void mergesort(vector<int> &v){
    int n = v.size();
    if(n==1) return;
    // Divide and conquer
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int> a(n1), b(n2); 
    for(int i=0;i<n1;i++){
        a[i] = v[i] ;
    }
    for(int i=0;i<n2;i++){
         b[i] = v[i+n1];
    }
    // magic aka recursion
    mergesort(a);
    mergesort(b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}

int main(){
     int arr[]= {5,1,3,0,4,9,6};
      int n = sizeof(arr)/4;

     vector<int> v(arr,arr+n);  
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     } 
     cout<< endl; 
    mergesort(v);              // It is a stable sort O(nlogn)
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     } 
    // Applications
    // Sort linked list
    // Used in count inversions
    // External sorting

    // Drawbacks
    // Space complexity O(nlogn) but can be improved by deleting array after merge function.O(n)  
}