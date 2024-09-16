// Sort the arrys of 0`s , 1`s and 2`s
// Dutch Flag Algorithm (3 Pointer Algorithm)
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> nums;
int n = nums.size();
 int low=0;     // 0 to low-1 tk 0
 int mid = 0;  // 3 conditions   // low se mid-1 tk 1
 int high =n-1;    // high se n-1 tk 2

while(mid<=high){
     if(nums[mid]==2){
        nums[mid] = nums[high];    // Swapping
        nums[high] = 2;
        high--;

     }
     else if (nums[mid]==0){
        nums[mid] = nums[low];    // Swapping
        nums[low] = 0;
        low++;
        mid++;
     }
      else mid++;

}
   return;
}