#include<iostream>
using namespace std;
class Student{ 
  private: // We want user not to change the value but able to print it
    string name;  
    int roll ;
    float gpa;
    public:
    Student(string s,int r, float n){
        name = s;
        roll=r;
        gpa= n;
    }
    // Getter
    float getmarks(){
      return gpa;
    }
    // Setter
    void setmarks(float m){
       gpa =m;
    }
 };

int main(){
  Student s("Pratham", 26, 7.6);  
   cout<<s.getmarks()<<endl;
   s.setmarks(8.6);
   cout<<s.getmarks();

}