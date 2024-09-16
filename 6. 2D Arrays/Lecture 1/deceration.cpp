#include<iostream>
using namespace std;
int main(){
// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Row ands columns 
int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  // arr[0][0]= 4;
//    cout<< arr[1][0];

// 2d array is an array of arrays(Rows) 

// Note : It is necessary to write column while declaration
 // int arr[][3] = {1,2,3,4,5,6,7,8,9}; // Valid
//   int arr[3][] = {1,2,3,4,5,6,7,8,9}; // Not valid


 for(int i=0;i<=2;i++){ // i is row no
      for(int j=0;j<=2;j++){  //j is column
    cout<< arr[i][j]<<" ";
 }
   cout<< endl;
}
}