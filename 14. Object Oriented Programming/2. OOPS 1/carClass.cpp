#include<iostream>
using namespace std;

class Car{
  public:
    string name;
    int price;
    int seats;
    string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
void change(Car c){
   c.name ="XYZ";
   c.price = 10000;
   c.seats = 4;
   c.type = "Pan";
}
int main(){
   Car c1;
   c1.name ="Honda";
   c1.price = 150000;
   c1.seats = 5;
   c1.type = "Sedan";
  print(c1);
  change(c1);  // Will not change value (just like other data types)                
  print(c1);   // Pass by value ho rha hai (And lgao for change)
//    Car c2;
//    c2.name ="Maruti Swift";
//    c2.price = 700000;
//    c2.seats = 5;
//    c2.type = "Hatchback";

//    Car c3;
//    c3.name ="Toyota Fortuner";
//    c3.price = 3600000;
//    c3.seats = 8;
//    c3.type = "SUV";
  
   // Q. Is there a way to print these things easily?
  // Yes. Create a print function :)
//   print(c1);
//   print(c2);
//   print(c3);
  
}