#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
// vector<int> v(5); 
// for (int i = 0; i < 5; i++)
// {
//     cin>> v[i];                   // When size given
// }
// for (int i = 0; i < 5; i++)
// {
//    cout<< v[i]<<" ";
// }

vector<int> v;
  for (int i = 0; i < 5; i++){
    int x;
    cin>> x;
    v.push_back(x);
  }

for (int i = 0; i < 5; i++){
    cout<< v[i]<<" ";
  }



}