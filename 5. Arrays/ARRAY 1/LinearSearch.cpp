// Find the element x in the array. Take array and x as input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter size of Array  :";
    cin>> n;
    int arr[n];
    // input

 cout<< " Enter Elements :" ;  
 for(int i=0; i<=n-1;i++){
    cin>>arr[i];
}
int x;
cout<< "Enter x : ";
cin>> x;
// search
// check mark 
bool flag = false ; // not present
for(int i=0; i<=n-1;i++){
   if( arr[i]==x) flag = true;
  
}
if( flag == true) cout << " Element is present";
else cout << " Element is not prresent";

}