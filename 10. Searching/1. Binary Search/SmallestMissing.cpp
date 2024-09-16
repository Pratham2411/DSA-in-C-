// Given a sorted Array of non negative integers. Find the smallest missing non negative element in it
#include<iostream> 
using namespace std;
int main(){
    int nums[]={0,1,2,3,4,8,9,12}; 
    int n=8;
    // Linear search
    // for(int i=0;i<n;i++){
    //     if(nums[i]!=i){
    //         cout<<i;
    //         break;
    //     }
    // }

    // Binary Search

    
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid= (lo+hi)/2;
           if(mid==nums[mid]){
            lo=mid+1;
           }
           else{
            ans=mid;
            hi=mid-1;
           }          
    }
    
     cout<< ans;
}
          
