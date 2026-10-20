#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cout<<"Enter three number : ";
  cin>>a>>b>>c;
  cout<<"The largest number is : "<<((a>b&&a>c)?a:((b>a&&b>c)?b:c))<<endl;
  return 0;
}