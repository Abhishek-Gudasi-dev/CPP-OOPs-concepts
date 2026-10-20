#include<iostream>
using namespace std;
void show(int s){
  cout<<"function out side a template"<<endl;
}//exact function get first priorite 
template<class t>
void show(t a){
 cout<<"function inside a template"<<endl; 
}
int main(){
  show(5);
  show(3.5);
  show('p');
  return 0;
}