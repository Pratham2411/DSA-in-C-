// Sort the arrys of 0`s , 1`s and 2`s

#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> nums;
int n = nums.size();
 int no0=0;
 int no1 = 0;
 int no2 =0;
 for(int i =0;i<n;i++){
    if(nums[i]==0)no0++;
    else if(nums[i]==1)no1++;
    else no2++;
 }
    for(int i=0;i<n;i++){
        if(i<no0) nums[i]= 0;
        else if (i<(no0 + no1)) nums[i] = 1;
        else nums[i] = 2;
    }

   
}