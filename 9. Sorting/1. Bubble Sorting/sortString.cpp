// Sort a string in decreasing order after removal of values smaller than x
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s="AZYZXBDJKX";
    for(int i=0;i<11;i++){
    cout<< s[i]<<" ";
 }
 cout<<endl;
    string t;
    for(int i=0;i<11;i++){
       if(s[i]>='X') {
         t.push_back(s[i]);
       }
    }
    
    int n= t.size();
    // reverse bubble sort
     for(int i=0;i<n-1;i++){   
     bool flag =true; 
     for(int j=0;j<n-1-i;j++){
        if(t[j]<t[j+1]){
            swap(t[j],t[j+1]);
            flag = false;
        }
     }
     if(flag==true) break; 
    }
 for(int i=0;i<n;i++){
    cout<< t[i]<<" ";
 }
}