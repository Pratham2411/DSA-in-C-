#include<iostream>
#include<vector>
using namespace std;
int main (){
   vector<int> v;  // need not to mention size
   // inserting / input do not use[]
   v.push_back(6);
   cout<<v.capacity()<<endl;
   v.push_back(1);
   cout<<v.capacity()<<endl;
   v.push_back(9);
   cout<<v.capacity()<<endl;
   v.push_back(0);
   cout<<v.capacity()<<endl;
   // access / update use []
   v[0] = 88;
   cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3];

}