#include<iostream>
using namespace std;
int main(){
int arr[]= { 4, 2, 6,1,7};
     int *ptr = arr;    // syntax
      for( int i=0; i<=4;i++){
        cout<< ptr[i]<< " ";
    }
    cout<<endl;
    //  cout<< ptr<<endl;
    //  cout<< &arr[0]<<endl;
    //  cout<< ptr[0]<< endl;// pointer has full acess to print and modify the array 
     *ptr = 8; // or ptr[0] = 8;
     ptr++;
     *ptr = 9;
     ptr--;
    for( int i=0; i<=4;i++){
        cout<< ptr[i]<< " ";
    }

}