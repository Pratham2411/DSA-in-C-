#include<iostream>
using namespace std;
int main(){
  int m,n,p,q;
cout<< "Enter row size(Matrix1) : ";
cin>> m;
cout<< "Enter column size(Matrix1) : ";
cin>> n;

  cout<< "Enter row size(Matrix2) : ";
cin>> p;
cout<< "Enter column size(Matrix2) : ";
cin>> q;



  if(n==p){
     cout<< " Enter First Matrix\n";

   int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>> a[i][j];
        }
    }
   cout<< " Enter Second Matrix\n";
        int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>> b[i][j];
        }
    } 
     int res[m][q];
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;                     // The Code
            for(int k=0;k<p;k++){
                res[i][j]+= a[i][k]*b[k][j];
            }                     // res[i][j]= a[i][0]*b[0][j]+a[i][1]*b[1][j]+...(upto n-1/q-1)
        }
    } 
     cout<< endl;
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<< res[i][j]<<" ";
        }
        cout<< endl;
    } 

  }
  else cout<< "Multiplication not Possible";


 
}