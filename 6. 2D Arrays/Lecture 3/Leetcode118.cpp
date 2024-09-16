// Given an Integer(no of rows), Generate pasal's traingle
#include<iostream>
#include<vector>
using namespace std;
// Leetcode solution
//  vector<vector<int>> generate(int numRows) {
//          int m =numRows;
//     vector<vector<int> > v;
//     // Making empty vectors
//     for(int i=1;i<=m;i++){
//         vector<int> a(i);
//         v.push_back(a);
//     }
//     // Generate values
//      for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//           if(j==0||i==j){
//             v[i][j]=1;
//           }
//           else{
//             v[i][j] = v[i-1][j]+v[i-1][j-1];
//           }
//         }
//      }
//       return v;
int main(){
    int m =2;
    vector<vector<int> > v;
    // Making empty vectors
    for(int i=1;i<=m;i++){
        vector<int> a(i);
        v.push_back(a);
    }
    // Generate values
     for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
          if(j==0||i==j){
            v[i][j]=1;
          }
          else{
            v[i][j] = v[i-1][j]+v[i-1][j-1];
          }
        }
     }
     // Print 
     for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
          cout<< v[i][j]<<" ";
        }
         cout<< endl;
     }
}
   