// You are given a positive integer num consisting of exactly four digits. Split num into two new integers new1 and new2 by using the digits found in num. Leading zeros are allowed in new1 and new2, and all the digits found in num must be used.

// For example, given num = 2932, you have the following digits: two 2's, one 9 and one 3. Some of the possible pairs [new1, new2] are [22, 93], [23, 92], [223, 9] and [2, 329].
// Return the minimum possible sum of new1 and new2.

// class Solution {
// public:
//     int minimumSum(int num) {
//         int ones = num%10;
//         num/=10;
//         int tens = num%10;
//          num/=10;
//         int hund= num%10;
//          num/=10;
//         int thds = num;
//         vector<int> v(4);
//         v[0]= ones;
//         v[1]= tens;
//         v[2] = hund;
//         v[3] = thds;
//         sort(v.begin(), v.end());
//         int num1 = 10*v[0] +v[2];
//         int num2=  10*v[1]+v[3];
//        int sum = num1+num2;
//         return sum ;
//     }
// };