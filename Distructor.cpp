#include<iostream>
using namespace std;
int objcount=0;
class Num{
  public:
  Num(){
    objcount++;
    cout<<"constructor invoked for object num "<<objcount<<endl;
  }
  ~Num(){
    cout<<"distructor invoked for object num "<<objcount<<endl;
    objcount--;
  }
  
};
int main(){
  cout<<"in main function"<<endl;
  Num num1;
  {
    cout<<"inside scope"<<endl;
    Num num2,num3;
    cout<<"end of scope"<<endl;
  }
  cout<<"end of main function"<<endl;
 return 0;
}