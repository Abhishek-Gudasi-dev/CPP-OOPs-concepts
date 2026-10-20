#include<iostream>
using namespace std;

int main(){
  int n;
  char ch='A';
  cout<<"Enter a number : ";
  cin>>n;
  
  for(int i=0;i<n;i++){
    cout<<endl;
    for(int j=0;j<n;j++){
      cout<<ch<<" ";
      ch++;
    }
  }
  return 0;
}