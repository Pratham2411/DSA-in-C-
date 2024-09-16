#include<iostream>
#include<vector>
using namespace std;
int main(){
   
    //  vector<int> v(5,2);  (size, initial value of each)
    //  cout<< v[0]<<" ";
    //  cout<< v[1]<<" ";
    //  cout<< v[2]<<" ";
    //  cout<< v[3]<<" ";
    //  cout<< v[4]<<" ";
 
    // vector< vector<int> > v(3,3); // invalid syntax
     vector< vector<int> > v(3,vector<int> (4,2)); // (vectors, size of each vector) or (3rows, 4columns)
    cout<< v.size()<<endl; // For row size
    cout<< v[0].size()<<endl;//  For column size_t


}