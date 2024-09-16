// Find the next permutation of Array
// If not possible then print the sorted order
// Find Pivot index
// reverse everything before pivot element(ascending)
// find element just greater than index
// swap index and the element just greater than index (in the elements after index)
// Reverse complate array if no pivot index
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextpermutation(vector<int>&nums){
       int n= nums.size();
       //1. Finding pivot index
       int idx = -1;
       for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
       } 
       if(idx==-1){
        reverse(nums.begin(),nums.end());  // Reverse syntax for complete vector
        return;
       }
       //2. sorting/reverse after pivot index
      reverse(nums.begin()+(idx+1),nums.end());
      // i se j tk reverse k syntax reverse(nums.begin()+i,nums.begin()+j+1)
      // here i = idx+1, no j as end tk krna hai

      // 3. finding element
      int j= -1;
      for(int i=idx+1;i<n;i++){
         if(nums[i]>nums[idx]){
            j=i;
            break;
         }
      }

      // 4. swapping
      int temp= nums[idx];
      nums[idx]= nums[j];
       nums[j]= temp;
      return;
}

int main(){

}