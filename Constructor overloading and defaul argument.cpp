#include<iostream>
using namespace std;
class Value{
  int a,b,c;
  public:
  
  Value(){
    a=0;
    b=0;
    c=0;
  }
  Value(int p){
    a=p;
    b=0;
    c=0;
  }
  Value(int p,int q,int r=4){ // default value of r is 4
    a=p;
    b=q;
    c=r;
  }
  void print(){
    cout<<"a : "<<a<<"b : "<<b<<"c : "<<c<<endl;
  }
};

int main (){
  Value v1;// default constructor
  v1.print();
  Value v2(4);// single argument constructor
  v2.print();
  Value v3 = Value(3,4);
  v3.print();
  Value v4 = Value(3,4,5);
  v4.print();
  return 0;
}
