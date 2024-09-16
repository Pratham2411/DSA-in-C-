//  Given a sorted Array and an integer 'x'. Find the first occurance of x in array. Return -1 if not present.
#include<iostream> 
using namespace std;
int main(){
    int nums[]={1,2,2,3,3,3,3,3,4,4,5,8,9}; 
    int n=13;
    int x=3;

    int lo=0;
    int hi=n-1;
    bool flag = false;
    while(lo<=hi){
        int mid= (lo+hi)/2;
            if(nums[mid]==x) {
                if(nums[mid-1]==x){
                    hi=mid-1;
                }
                else {cout<<mid;
                flag = true;
                 break;
                }
                    }
            else if(nums[mid]<x) lo = mid+1;
            else hi = mid-1;
             
    }
    if(flag==false) cout<<"-1"; 
     
}
// Note : Last occurance code will be similar