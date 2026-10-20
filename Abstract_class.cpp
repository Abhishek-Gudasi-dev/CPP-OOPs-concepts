#include<iostream>
using namespace std;

class Base{
  public:
  virtual void display()=0;
};
class Derived1: public Base{

};
class Derived2:public Derived1{
  public:
   virtual void display(){
    cout<<"Derived2 class display function is invoked"<<endl;
  }
};

int main(){
  Base *base_class_pointer;
  //Derived1 obj_derived1; this is an abstract class you cant creat the object of an abstract class
  Derived2 obj_derived2;
  base_class_pointer=&obj_derived2;
  base_class_pointer->display();
  return 0;
}