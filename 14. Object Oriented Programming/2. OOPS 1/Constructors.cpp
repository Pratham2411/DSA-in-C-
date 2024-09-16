#include<iostream>
using namespace std;
// Constructor is like a fn ( but do not have any return type) Constructor name should be the class name
class Student{ 
  public:
    string name;   
    int roll ;
    float gpa;
    Student(){  // Default constructor (Phle se hota hai if no constructtor present)
        // Necesaary for normal initialistion
    }
//  Parameterised Constructor 
    Student(string s, int r ){
      name = s;
      roll = r;    
    }
     Student(string s, int r ,float g){
      name = s;
      roll = r; 
      gpa =g;   
    }
 };
int main(){
   Student s1("Pratham",26);   // first constructor
    s1.gpa=7.6;
   cout<< s1.name<<" "<<s1.roll<<" "<<s1.gpa<<endl;

    Student s2;  
   s2.name ="Gautam";  // default constructor used
   s2.roll = 29; 
   s2.gpa = 8.6;
  cout<< s2.name<<" "<<s2.roll<<" "<<s2.gpa<<endl;

  Student s3("Madhav",30,8.7);  // 3rd constructor used
  cout<< s3.name<<" "<<s3.roll<<" "<<s3.gpa<<endl;

  Student s4 = s1;    // Deep copy
  s4.name = "Satyam";
   cout<< s4.name<<" "<<s4.roll<<" "<<s4.gpa<<endl;
 
  Student s7(s1); // Copy constructor (recives object ) // Deep copy
  s7.name = "Anant";
  cout<< s7.name<<" "<<s7.roll<<" "<<s7.gpa<<endl;
}