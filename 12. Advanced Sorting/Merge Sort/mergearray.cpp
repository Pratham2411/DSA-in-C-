// Merge two sorted arrays.
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){ // by reference dena hai
    int i =0; // a
    int j =0;// b
    int k =0;// res
    while(i<a.size() && j<b.size()){
       if(a[i]<b[j])  res[k++] = a[i++];     // k++; // i++;      
       else  res[k++] = b[j++];
    }
     if(i==a.size())
        while(j<b.size()) res[k++]=b[j++];  

     if(j==b.size())
        while(i<a.size()) res[k++]=a[i++];

}


int main(){
     int arr[]= {1,4,5,8};
      int n1 = sizeof(arr)/4;
     vector<int> a(arr,arr+n1);    // To copy an Array in vector
     int brr[] = {2,3,6,7,10,12};
     int n2 = sizeof(brr)/4;
     vector<int> b(brr,brr+n2);
     vector<int> res(n1+n2);

     merge(a,b,res);
    
}