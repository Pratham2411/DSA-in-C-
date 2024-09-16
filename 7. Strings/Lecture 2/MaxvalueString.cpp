// Given n strings of numbers. Return the index of string which has maximum value
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    int n=6;
    cout<<"Enter Strings:"<<endl;
   vector<string> s;
   for(int i=0;i<n;i++){
     string str;
     cin>> str;
     s.push_back(str);
   }
   vector<int> v;
   for(int i=0;i<n;i++){
      int x=stoi(s[i]);
      v.push_back(x);
   }
//    sort(v.begin(),v.end());
//    cout<<v[n-1];
   int max = v[0];
   int idx =0;
   for(int i=1;i<n;i++){
      if(v[i]>v[(i-1)]){
        max=v[i];
        idx=i;
      }
   }
   cout<<max<<" "<<idx;

    
} 