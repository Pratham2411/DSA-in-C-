#include<iostream>
using namespace std;

void fun(int x){
    if(x==0) return;
    cout<<"Pratham is best"<<endl;
    fun(x-1);
    
}
// Calling functions
int main(){
    int n;
    cin>>n;
   fun(n);

}