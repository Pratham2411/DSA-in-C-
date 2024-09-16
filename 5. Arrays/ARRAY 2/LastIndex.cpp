#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
  v.push_back(9);
  v.push_back(10);
  v.push_back(6);
  v.push_back(12);
  v.push_back(11);
  v.push_back(6);
  v.push_back(0);
  
 int x;
 cout<< " Enter number to search ";
 cin>> x;
int index = -1;
for (int i = v.size()-1; i>=0; i--)
{
   if(x==v[i]){ index = i; 
   break;
   }
}
if(index!=-1)cout<< " Last index is : "<< index;
else cout << " No index available";
}
