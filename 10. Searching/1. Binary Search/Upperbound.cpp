// Given a sorted Array and an integer 'x'. Find the upper bound of x.
// Upper bound: Element just greater than x in tha array.
#include<iostream> 
using namespace std;
int main(){
    int nums[]={1,2,4,5,9,15,18,21,24}; int n=9;
    int x=18;
    int lo=0;
    int hi=n-1;
    bool flag = false;
    while(lo<=hi){
        int mid= (lo+hi)/2;
            if(nums[mid]==x) {cout<<nums[mid+1]; flag = true; break;}
            else if(nums[mid]<x) lo = mid+1;
            else hi = mid-1;
             
    }
    if(flag==false) cout<<nums[lo]; 
     
}

// Note: If element is not in the array the upper bound is at index (l0).


