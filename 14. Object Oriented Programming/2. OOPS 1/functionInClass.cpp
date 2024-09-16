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
   void print(){
    cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
   }
   int matches(){
    return this->runs/ this->avg;
   }
};


int main(){
   Cricketer c1("Rohit", 20000,50.5);
   Cricketer c2("Virat", 25000, 47.8);
   c1.print();  // Dot operator can acess functions of a class
   c2.print();
  cout<<c1.matches()<<endl;
  cout<<c2.matches()<<endl;
  
}