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
  void change(Cricketer* c){
   //  (*c).avg = 60;
   c->avg = 66;     // alternate method  // mtlb c pe rakhe adress pe jake change kar do
  }
int main(){
   Cricketer c1("Rohit", 20000,50.5);
   Cricketer c2("Virat", 25000, 47.8);
  
//   Cricketer* p1 = &c1;
//   cout<<(*p1).runs<<endl; // bracket is necessary
//   (*p1).avg = 60; // modify
   change(&c1);
   cout<<c1.avg<<endl;

}