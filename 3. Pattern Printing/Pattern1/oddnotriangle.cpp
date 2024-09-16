// 1
// 13
// 135
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " No of rows ";
    cin>> n;
    // n+2 can be used?
    for(int i =1; i<=2*n-1; i+=2){
        for(int j=1;j<=i;j+=2){
            cout<<j;
        }
        cout<< endl;
    }

}