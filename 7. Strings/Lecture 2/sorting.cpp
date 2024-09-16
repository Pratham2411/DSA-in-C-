#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
   cout<< "Enter string:";
   getline(cin,s);
   sort(s.begin(),s.end()); // spaces are in the beggining of sorted string
   // Strings are sorted on the basic of ascii values
   
   cout<< s;
}