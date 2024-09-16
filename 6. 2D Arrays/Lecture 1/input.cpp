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
// print
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
         cout<< arr[i][j]<<" ";
    }
    cout<< endl;
}





}