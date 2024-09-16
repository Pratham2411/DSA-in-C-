// Single level inheritance
#include<iostream>
#include<vector>
using namespace std;
class Scooty{   // Parent class
    public:
    int topspeed;
    float mileage;
 virtual void sound(){ // Virtual makes suru the objects gets called to the right class
        cout<<"Vroom Vroom"<<endl;
    }
};

class Bike : public Scooty{  
   public:  
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }      
};

class SuperBike : public Bike{  
   public:  
    void sound(){
        cout<<"Zroom Zroom"<<endl;
    }      
};

int main(){
  Scooty*b = new Bike();
   b->sound();

   Bike*c = new SuperBike(); // Goes to parent class(DADA in this case)
   c->sound();

   Scooty*d = new SuperBike(); 
   d->sound();
     vector<Scooty> v; // To store derived classes functions in one vector
   // In short what matters is virtual in parent class
   
}