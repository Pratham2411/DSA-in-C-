// Valid anagram

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="prathamraj";
    string t= "rajpratham";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<< "True";
    else cout<<"False";  
}