


// Method 1: Using extra space
//     int n = nums.size();
//     vector<bool> check(n+1,false);
//     for(int i =0;i<n;i++){
//         int ele = nums[i];
//         check(ele) = true;
//     }
//     for(int i =0;i<=n;i++){
//         if(check[i]==false) return i;
//     }
//    return -1;

// Method 2 : Without extra space( Cycle Sort)

//     int n = nums.size();
//     int i =0;
//     while(i<n){
//         int correctidx = nums[i];
//        if(i==correctidx|| nums[i]==n) i++;
//       else  swap(nums[i],nums[correctidx]);
//     }
//    for(int i=0;i<n;i++){
//     if(nums[i]!=i) return i;
//     }
//    return n;

// Method 3 : Maths
//     int n = nums.size();
//   int actualSum=n*(n+1)/2;
//   int int sum = 0;
//   for(int i=0;i<n;i++){
//     sum+=nums[i];
//   }
//   return actualSum-sum;