#include<iostream>
using namespace std;
class Base1{
  private:
     int data1;
  public:
     Base1(int a){
       data1=a;
       cout<<"Base1 constructor is invoked"<<endl;
     }
  void Base1_print(){
    cout<<"the value of data1 is : "<<data1<<endl;
  }
};
class Base2{
  private:
     int data2;
  public:
     Base2(int b){
       data2=b;
       cout<<"Base2 constructor is invoked"<<endl;
     }
  void Base2_print(){
    cout<<"the value of data2 is : "<<data2<<endl;
  }
  
};
class Derived:public Base1, public Base2{// if any class is virtual that class Constructor invoked first
  private:
    int data3;
  public:
    Derived(int a,int b,int c):Base1(a),Base2(b){
      data3=c;
       cout<<"Derived class constructor is invoked"<<endl;
    }
  void Derived_print(){
    cout<<"the value of data3 is : "<<data3<<endl;
  }
};
int main(){
  Derived der(1,2,3);
  der.Base1_print();
  der.Base2_print();
  der.Derived_print();
  return 0;
}
