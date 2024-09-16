#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="Pratham is  a good boy";
    stringstream ss(str);
    string temp; // ss>>temp : temp me ss input ho rha hai
    while(ss>>temp){    // temp me space hta ke store ho rha hai str bcz of ss
        cout<< temp<<endl;
    }
} 