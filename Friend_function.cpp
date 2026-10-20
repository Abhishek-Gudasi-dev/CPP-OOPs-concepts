#include<iostream>
using namespace std;

class Complex{
  private:
  int a,s;
  friend void sum_of_complex_numbers(Complex ,Complex);
  public:
  void setData(int a1, int s1){
    a=a1;
    s=s1;
  }
  void getData(void){
    cout<<"the complex number is : " <<a<<"+"<<s<<"i"<<endl;
  }
};
void sum_of_complex_numbers(Complex o1,Complex o2){
Complex o3;
  o3.a=o1.a+o2.a;
  o3.s=o1.s+o2.s;
  o3.getData();
}
int main(){
  Complex o1,o2;
  o1.setData(1,4);
  o1.getData();
  
  o2.setData(4,5);
  o2.getData();
  
  sum_of_complex_numbers(o1,o2);
  
  return 0;
  
}