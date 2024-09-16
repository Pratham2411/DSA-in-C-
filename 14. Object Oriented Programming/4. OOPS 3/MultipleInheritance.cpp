#include<iostream>
using namespace std;
class Cricketer{  
    public:
    int runs;
    int wicket;
    int average;
};
class Engineer{  
   public:       
   int experience;
   string domain;

};
class phodu : public Engineer, Cricketer{ // Multiple inheritance
  public:  
  string name;
};

int main(){
   // Note:  protected data member can be use in a derived class unlike a private one.
}