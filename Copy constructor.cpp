#include<iostream>
#include<string>
using namespace std;
class Teacher{
  string name;
  string sub;
  public:
  void setData(string name,string sub){
    this->name=name;
    this->sub=sub;
  }
  void getData(){
    cout<<" name: "<<name<<"subject : "<<sub<<endl;
  }
};
int main(){
  Teacher t1;
  t1.setData("kriti","computer science");
  Teacher t2(t1);
  t2.getData();
  return 0;
}