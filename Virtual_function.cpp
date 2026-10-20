#include<iostream>
using namespace std;

class Base{
  public:
  virtual void display(){
    cout<<"Base class display function is invoked"<<endl;
  }//ye bolega ki me tho virtual hu jaake uss object ki display run karo agar nahi hai usaka display tho mera hi kardo
};
class Derived1: public Base{
  public:
 void display(){
    cout<<"Derived1 class display function is invoked"<<endl;
  }
};
class Derived2:public Derived1{
  public:
   virtual void display(){
    cout<<"Derived2 class display function is invoked"<<endl;
  }
};

int main(){
  Base *base_class_pointer;
  Derived1 obj_derived1;
  Derived2 obj_derived2;
  base_class_pointer=&obj_derived2;
  base_class_pointer->display();
  return 0;
}