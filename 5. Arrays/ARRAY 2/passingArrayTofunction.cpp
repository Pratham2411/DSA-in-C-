#include<iostream>
using namespace std;
void display(int a[], int size){
for( int i=0; i<=4;i++){
    cout<< a[i]<< " ";
}
cout<< endl;
}
void change(int b[],int size){   // size alag se dena padega
b[0]= 100;
}

int main(){
    int arr[]= { 1,4, 2,7,4};
    int size = sizeof(arr)/ 4; // r sizeof(arr)/ sizeof(arr[0]); 
// accesing array elements in another function
// updation, pass by value or reference ?
   display(arr, 5);
   change(arr, 5);
   display(arr, 5);
// a and b are not new arrays
// they are adresses of arr ( array is passed by reference )

}