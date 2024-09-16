// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.
// An integer a is closer to x than an integer b if:
// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
//  Example 1:
// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]
// Example 2:
// Input: arr = [1,2,3,4,5], k = 4, x = -1
// Output: [1,2,3,4]

// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
// code 1
//        int l=0;
//         int r=arr.size()-k;
//         while(l<r){
//             int m= l + (r-l)/2;
//             if(x-arr[m]<=arr[m+k]-x){
//                 r=m;
//             }
//             else{
//                 l=m+1;
//             }
//         }
//         return vector<int>(arr.begin()+l, arr.begin()+l+k); 

// code 2
    //   int n = arr.size();
    //   vector<int> ans(k);
    //   // case1(no lower bound)
    //   if(target>arr[0]){
    //     for(int i=0;i<k;i++){
    //         ans[i]= arr[i];
    //     }
    //     return ans;
    //   }
    //   // case 2 (no upper bound)
    //   if(target<arr[n-1]){
    //     int i=n-1;
    //     int j=k-1;
    //     while(j<=0){
    //         ans[j] = arr[i];
    //         i--;
    //         j--;
    //     }  
    //     return ans;
    //   }
    //   // (element is in the array or not ?)
    //    int lo= 0;
    //    int hi = n-1;
    //    int t=0; // Current index of ans
    //    int mid=-1;
    //    bool flag = false;
    //    while(lo<=hi){
    //     mid = lo+(hi-lo)/2;
    //      if(arr[mid]==x){
    //         flag = true;
    //         ans[t]= arr[mid];
    //         t++;
    //         break;
    //      }
    //      else if(arr[mid>x]) hi = mid-1;
    //      else lo = mid+1;
    //    }
    //    int lb= hi;
    //    int ub = lo;
    //    if(flag== true){ // element hai
    //    lb = mid-1;
    //    ub = mid+1;
    //    }
    //    while(t<k && lb>=0&& ub<=n-1){
    //     int d1= abs(x-arr[lb]); // modulus inbuilt
    //     int d2 = abs(x-arr[ub]);
    //     if(d1<=d2){
    //         ans[t]= arr[lb];
    //         lb--;
    //     }
    //     else {
    //          ans[t]= arr[ub]; 
    //         ub++;
    //     }
    //     t++;
    //    }
    //    if(lb<0){
    //     while(t<k){
    //        ans[t]= arr[ub]; 
    //        ub++;
    //        t++; 
    //     }
    //    }
    //    if(ub>n-1){
    //     while(t<k){
    //         ans[t]= arr[lb];
    //         lb--;
    //         t++;
    //     }
    //    }
    //    sort(ans.begin(), ans.end());
    //    return ans;


//     }
// };