#include<iostream>
#include<cmath>
using namespace std;

int sum(int x, int y){
   return x+y;

}
int mini(int x, int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}

int main(){
 //   cout<< sum(40,6);
 int x,y;
 cin>> x>>y;
cout<< mini(x,y);  // min, max are also inbuilt
cout<< sqrt(7); // inbuilt fns

}