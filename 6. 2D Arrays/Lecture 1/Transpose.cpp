// Print transpose of a given matrix and store it
#include<iostream>
using namespace std;
int main(){

int m,n;
cout<< "Enter row size : ";
cin>> m;
cout<< "Enter column size : ";
cin>> n;
int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
         cin>> arr[i][j];
    }
}
  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cout<<arr[i][j]<<" ";
    }
    cout<< endl;
 }
 
  int tp[n][m];
  // storing
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
         tp[i][j]= arr[j][i];
    }
}
  

}