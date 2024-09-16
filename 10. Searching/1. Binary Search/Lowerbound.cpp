// Given a sorted Array and an integer 'x'. Find the lower bound of x.
// Lower bound: Element just less than x in tha array.
#include<iostream> 
using namespace std;
int main(){
    int nums[]={1,2,4,5,9,15,18,21,24}; int n=9;
    int x=14;
    int lo=0;
    int hi=n-1;
    bool flag = false;
    while(lo<=hi){
        int mid= (lo+hi)/2;
            if(nums[mid]==x) {cout<<nums[mid-1]; flag = true; break;}
            else if(nums[mid]<x) lo = mid+1;
            else hi = mid-1;
             
    }
    if(flag==false) cout<<nums[hi]; 
     
}

// Note: If element is not in the array the lower bound is at index (hi).
// Note: Do not change the basic syntax of binary search(infinite loop chances!)

