// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Input: arr = [0,2,1,0]
// Output: 1

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n=arr.size();
//     int lo= 1;
//     int hi=n-2;
//     // First and last index will never be peak.
//     while(lo<=hi){
//         int mid = lo+(hi-lo)/2;
//         if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         else if (arr[mid]>arr[mid+1]) hi = mid-1;
//         else lo = mid+1;
//     }
//     return -1;
//     }
// };