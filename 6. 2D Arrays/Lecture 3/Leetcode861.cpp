// You are given an m x n binary matrix grid.
// A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's).
// Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.
// Return the highest possible score after making any number of moves (including zero moves)

// Leetcode solution

//  class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {
//         int rows=grid.size();
//         int cols = grid[0].size();
//         // flip rows with forst element 0( Making First column of each row 1)
//         for(int i=0;i<rows;i++){
//             if(grid[i][0]==0) {
//             for(int j=0;j<cols;j++){
//                 if(grid[i][j]==0) grid[i][j]=1;
//                 else grid[i][j]=0;             // flip
//             } 
//             }
//         }
//        // Flip columns where no of zeroes is greater than ones
//        for(int j=0;j<cols;j++){
//         int noz = 0;
//         int no1 = 0;
//          for(int i=0;i<rows;i++){
//             if(grid[i][j]==0) noz++;
//             else no1++;
//          }
//          if(noz>no1){
//             for(int i=0;i<rows;i++){
//                 if(grid[i][j]==0) grid[i][j]=1;
//                 else grid[i][j]=0;             // flip
//             }
//          }
//        }
//     // Coverting matrix into decimal
//      int sum =0;
//      for(int i=0;i<rows;i++){
//         int x =1;
//         for(int j= cols-1;j>=0;j--){
//             sum+= grid[i][j]*x;
//             x*=2;                                    // binary to decimal code
//         }
//      }
//       return sum;
//     }
// };