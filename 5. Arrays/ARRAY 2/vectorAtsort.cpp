#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){

vector<int> v;
  v.push_back(9);
  v.push_back(10);
  v.push_back(6);
  v.push_back(1);
// cout<< v.at(2);
for (int i = 0; i<v.size(); i++)
{
    cout<< v.at(i)<< " ";
}

cout<< endl;
//  v.at(2) = 90; 
sort(v.begin(), v.end());  // for sorting
for (int i = 0; i<v.size(); i++)
{
    cout<< v.at(i)<< " ";
}

// 1:19
}