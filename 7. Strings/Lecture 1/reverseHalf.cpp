// Reverse the first half of a string of even length
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n= s.size()/2;
    reverse (s.begin()+0,s.begin()+n);
    cout<<s<<"\n";
}