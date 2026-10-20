#include<iostream>
using namespace std;
class Base1{
  protected:
  int data1;
};
class Base2{
  protected:
  int data2;
};
class Derived:public Base1,public Base2{
  protected:
  int data3;
  public:
  Derived(){
    data1=10;
    data2=20;
    data3=30;
  }
  void show(void){
    cout<<"value of data1 is : "<<data1<<endl;
    cout<<"value of data2 is : "<<data2<<endl;
    cout<<"value of data3 is : "<<data3<<endl;
  }
};
int main(){
  Derived der;
  der.show();
  return 0;
}