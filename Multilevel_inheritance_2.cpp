#include<iostream>
using namespace std;
class Base{
  protected:
  int data1;
  public:
  Base(){
    data1=10;
  }
};
class Derived1: public Base{
  protected:
  int data2;
  public:
  Derived1(){
    data2=20;
  }
};
class Derived2: public Derived1{
  protected:
  int data3;
  public:
  Derived2(){
    data3=30;
  }
  void show(void){
    cout<<"value of data1 is : "<<data1<<endl;
    cout<<"value of data2 is : "<<data2<<endl;
    cout<<"value of data3 is : "<<data3<<endl;
  }
};
int main(){
  Derived2 der;
  der.show();
  return 0;
}