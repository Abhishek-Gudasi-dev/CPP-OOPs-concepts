#include<iostream>
using namespace std;
class Value{
  private:
  int amount;
  int years;
  float intrest;
  public:
   Value(int p,int q,int r){
    amount=p;
    years=q;
    intrest=(float)r;
    for(int i=1;i<=years;i++){
    amount+=amount*(intrest/100);}
  }
  Value(int p,int q,float R){
    amount=p;
    years=q;
    intrest=R;
    for(int i=1;i<=years;i++){
    amount+=amount*intrest;}
  }
 
 void print(){
    cout<<"returning amount is : "<<amount<<endl;
  }
};
int main(){
  int p,q,r;
  float R;
  cout<<"enter the values of p,q and r: "<<endl;
  cin>>p>>q>>r;
  Value v1(p,q,r);
  v1.print();
  cout<<"enter the values of p,q and R"<<endl;
  cin>>p>>q>>R;
  Value v2(p,q,R);
  v2.print();
  return 0;
}