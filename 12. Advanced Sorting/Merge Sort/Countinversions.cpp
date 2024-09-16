// Two elements of an array a form an inversion if a[i]>a[j] and i<j. Find the inversion count.
#include<iostream>
#include<vector>
using namespace std;
int count =0;

int inversion(vector<int>&a,vector<int>&b){
    int c =0;
    int i =0;// a
    int j =0; // b
    while(i<a.size()&& j<b.size()){
     if(a[i]>2*b[j]){
       c+=(a.size()-i);
        j++;
     }
    else {
      i++;
    }
    }
  return c;
}

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
    // Count inversions 
    count+=inversion(a,b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}

int main(){
     int arr[]= {2,4,3,5,1};
      int n = sizeof(arr)/4;
      vector<int> v(arr,arr+n);
      // int count =0;
  //  for(int i=0;i<n-1;i++){
  //       for(int j =i+1;j<n;j++){
  //         if(v[i]>v[j]) count++;
  //       }
  //    } 
    // cout<< count;
      mergesort(v);
      cout<<count;
}
