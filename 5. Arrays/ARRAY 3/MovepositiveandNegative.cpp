// move all negative numbers to beginning and negative numbers to end

#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
 v.push_back(1);
 v.push_back(8);
 v.push_back(3);
 v.push_back(6);
 v.push_back(-5);
 v.push_back(-4);
 v.push_back(-2);
  int n = v.size();
 for(int i =0; i<n;i++){
        cout<< v[i]<<" ";
    }
 int i = 0;
 int j = n- 1;
    while (i<j)
    {
     if (v[i]<0) i++;
     if(v[j]>0) j--;
     if(i>j) break;
     if(v[i]>0 && v[j]<0){
         int temp = v[i];
         v[i]= v[j];
         v[j]= temp;
         i++;
         j--;
     }
    }
    cout<< endl;
    for(int i =0; i<n;i++){
        cout<< v[i]<<" ";
    }
    
 
}