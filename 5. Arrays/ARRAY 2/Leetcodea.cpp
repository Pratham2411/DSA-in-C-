// Rotate the given array a by k steps, where k is non negative
// k can be greater than n as well where n is the size of array a
// Last k elements ko reverse kro ,rest ko alag reverse kro
// Last me sbko  saath reverse kro
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
  for(int i =0; i<a.size();i++){
    cout<< a[i]<<" "; 
  }
  cout<< endl;
}
void reversepart(int i, int j, vector<int>&v){
while (i<=j)
{
  int temp = v[i];
    v[i]= v[j];              
    v[j]= temp;
    i++;
    j--;  
}
}
int main(){
vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    int k;
    cout<< " Enter rotation size :";
    cin>> k;
    int n= v.size();
    if(k>n) k = k%n;
display(v);
reversepart(0,n-1-k,v);
reversepart(n-k,v.size()-1,v);
reversepart(0,n-1,v);
display(v);

}



