#include<iostream>
using namespace std;
class Cricketer{
 public:   
   string name;
   int runs;
   float avg;
   Cricketer(string name, int runs, float avg){
      this->name =name;
      this->runs =runs;
      this-> avg= avg;
   } 
};
int main(){
   Cricketer c1("Rohit", 20000,50.5);
   // Dynamic allocation   (Pointer se object banana)
   Cricketer *c2= new Cricketer("Virat", 25000, 47.8);
//   cout<<(*c2).name;
 cout<<c2->name<<endl;
 
//   int *arr = new int[5]; // Dynamic array 
//    arr[0]=1;
//    cout<<arr[0];
}