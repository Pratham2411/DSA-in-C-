// We use classes and objects in OOPS
// 1. Data Abstraction :  Layering or hiding some content
// 2. Data Encapsulation : Combining different data types
// 3.Inheritance
// 4. Polymorphism
// User defined Data Type :
#include<iostream>
using namespace std;
 class Student{ // student(class) is a new data type( Capital by convention )
  public:
    string name;   // attributes
    int roll ;
    float gpa;
 };
// Classes are blueprint. Object is instance of class which actually exists.

int main(){
   Student s;  // declaration ( s is called object ) 
   // initialisation
   s.name ="Pratham Raj";  // dot operator
    //s.roll = 26;
    cout<<"Enter roll no: ";    // taking input
    cin>> s.roll;
   s.gpa = 7.6;
cout<< s.name<<" "<<s.roll<<" "<<s.gpa;
 

}