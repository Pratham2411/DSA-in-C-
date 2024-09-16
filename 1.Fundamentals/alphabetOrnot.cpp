#include<iostream>
using namespace std;
int main(){
     char ch;
    cout<<"Enter a character :";
    cin>>ch;
    if ((ch>='A' && ch<='Z')|| (ch>='a'&&ch<='z'))
    {
        cout<<"The charecter is an alphabet";
    }
    else cout<< "The charecter is not an alphabet";
    }