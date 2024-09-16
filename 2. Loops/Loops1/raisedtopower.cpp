// Enter two numbers and print one raiseed to the power of another
#include<iostream>
using namespace std;
int main(){
    int a,b;
     cout<< "Enter a  :";
    cin>> a;
     cout<< "Enter b:";
    cin>> b;
    bool flag = true;
    if(b<0){
        flag = false;
        b = -b;
    }
    float power = 1;
    for( int i=1; i<=b;i++){
        power = power*a;
    }
    if(flag==false){
        power = 1/power;
    }
    if(a==0&& b==0) cout<<"Not defined";
    else cout<<"a^b is"<<" "<<power;
}