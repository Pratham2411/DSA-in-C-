// Single level inheritance
#include<iostream>
using namespace std;
class Scooty{   // Parent class
    public:
    int topspeed;
    float mileage;
  private:
  int bootspace;
};
class Bike : public Scooty{  // Scooty ki sari public features inherit ho gyi
   public:        // Bike is Child class/ derived class
   int gears;
};

int main(){
   Bike b;
   b.gears=5;
   b.mileage=12.5;
   b.topspeed=180;
}