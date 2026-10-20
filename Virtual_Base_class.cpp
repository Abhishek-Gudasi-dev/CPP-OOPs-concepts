#include<iostream>
using namespace std;
class Student{
  protected:
  int roll_no;
  public:
  void set_number(int r){
    roll_no=r;
  }
};
class Exam:virtual public Student{
  protected:
  float phy,math;
  public:
  void set_marks(float p,float m){
    phy=p;
    math=m;
  }
};
class Sports:public virtual Student{
  protected:
  int score;
  public:
  void set_score(int s){
    score=s;
  }
};
class Result:public Exam ,public Sports{
  public:
  int res;
  void result(){
    res=(((phy+math)+score)/210)*100;
  }
  void display(){
    cout<<"Roll no : "<<roll_no<<endl
        <<"Marks in physics : "<<phy<<endl
        <<"marks in mathematics : "<<math<<endl
        <<"score in sports : "<<score<<endl
        <<"Total result is : "<<res<<"%"<<endl;
  }
};

int main(){
  Result kriti;
  kriti.set_marks(82.7,89.4);
  kriti.set_number(508);
  kriti.set_score(9);
  kriti.result();
  kriti.display();
  return 0;
}