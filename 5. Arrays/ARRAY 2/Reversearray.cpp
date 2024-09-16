// write a program to copy elements of one array into other in reverse order
#include<iostream>
#include<vector>
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

vector <int> v1;
for(int i=v.size()-1; i>=0;i--){
  v1.push_back(v[i]);
}
   display(v1);

}