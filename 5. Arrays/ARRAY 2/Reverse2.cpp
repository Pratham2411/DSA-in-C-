// Write a program to reverse array without using an extra array
// TWO POINTERS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a){
  for(int i =0; i<a.size();i++){
    cout<< a[i]<<" ";
 
}
}
int main(){

vector<int> v;
int n;
cout<< " Enter array size : ";
cin>> n;

cout<< " Enter array element: ";
for(int i =0; i<n;i++){
  int q;
  cin>> q;
  v.push_back(q);

}

         // for(int i=0,j=v.size()-1;i<=j; i++,j--){
         //   int temp = v[i];
         //     v[i]= v[j];              // special for loop
         //     v[j]= temp;
                           // }
  int i =0;
  int j = v.size()-1;
  while (i<=j)
  {
    int temp = v[i];
    v[i]= v[j];              // swap code
    v[j]= temp;
    i++;
    j--;
  }
    //   reverse (v.begin(), v.end());   reverse function built in
display(v);
}