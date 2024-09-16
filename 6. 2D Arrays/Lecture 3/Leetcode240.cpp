// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
// Leetcode solution

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m = matrix.size();
//         int n = matrix[0].size();     
//         int i =0;
//         int j =n-1;
//         while(i<=m-1&&j>=0){
//             if(matrix[i][j]== target) return true;
//             else if(matrix[i][j]>target) j--;  // Go left
//             else i++;   // go down
//         }
//           return false;
//     }
// };