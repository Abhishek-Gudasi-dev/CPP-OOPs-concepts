#include<iostream>
#include<string>
using namespace std;
class Person{
  protected:
  string name;
  int age;
};
class Student:public Person{
  protected:
  int roll_no;
  string clg;
};
class Programmer:public Student{
  public:
  string coding_language;
  int expirence;
  
 void setData(){
  name="Abhi";
  age=18;
  roll_no=512;
  clg="IIT delhi";
  coding_language="java";
  expirence=5;
}
void getData(){
  cout<<"Name : "<<name<<endl;
  cout<<"age  : "<<age<<endl;
  cout<<"Roll no : "<<roll_no<<endl;
  cout<<"College : "<<clg<<endl;
  cout<<"Coading language : "<<coding_language<<endl;
  cout<<"expirence : "<<expirence<<"years"<<endl;
}
  
  };
int main(){
  Programmer pro;
  pro.setData();
  pro.getData();
  return 0;
}