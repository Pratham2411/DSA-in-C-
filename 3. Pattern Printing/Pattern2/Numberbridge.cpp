//1234567
//123 567
//12   67
//1     7
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " No of lines ";
    cin>> n;
    int nsp=1;
    int m = n-1;  // print 1st line and then look for others as pattern
for(int i=1; i<=2*n-1;i++){
    cout<< i;           // without endl first line
}

cout<< endl;


for(int i=1;i<=m;i++){
    int a=1;
    for(int j=1;j<=m+1-i;j++){
        cout<< a;
        a++;        // first no pattern
    }
    for(int k=1;k<=nsp;k++){
        cout<< " ";  
        a++;           // spaces  // for extra a
    }
    nsp+=2;
     for(int j=1;j<=m+1-i;j++){
        cout<< a; 
        a++;       // last no pattern     use of a
    }
    cout<< endl;

}

}
