// Input the character occuring max times in a string

// make a 26 size array, map indices with alphabets, fill zero at all indices and increase value acc to given string
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<< "Enter string:";
    cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<s.size();i++){
        char ch= s[i];
        int ascii = (int) ch;
        arr[ascii-97]++;     // a has ascii value 97
    }
    int mx=0;
    for(int i=0;i<26;i++){
      if(arr[i]>mx) mx=arr[i];
    }
    for(int i=0;i<26;i++){
      if(arr[i]==mx){
        cout<<(char)(i+97)<<" "<<arr[i];
      };
    }


} 