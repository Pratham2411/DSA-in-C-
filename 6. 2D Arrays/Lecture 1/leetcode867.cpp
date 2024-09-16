//  int m= matrix.size(); // rows
//  int n= matrix[0].size; // column size
//   vector<vector<int>> t(n,vector<int>(m));
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//          tp[i][j]= matrix[j][i];
//     }
// }


// Transform a square matrix into its transpose

#include<iostream>
#include<algorithm>

using namespace std;
int main(){

int m;
cout<< "Enter row/column size : ";
cin>> m;

int arr[m][m];
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
         cin>> arr[i][j];
    }
}
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(i!=j) swap(arr[i][j], arr[j][i]);
    }  
 }
  cout<< endl;
   for(int j=0;j<m;j++){
    for(int i=0;i<m;i++){
      cout<<arr[i][j]<<" ";
    }
    cout<< endl;
 }
  
}