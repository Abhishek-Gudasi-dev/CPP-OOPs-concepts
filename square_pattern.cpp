#include<iostream>
using namespace std;

int main(){

  int n=0;
  cout<<"Enter a number : ";
  cin>>n;

  for(int i=1;i<=n;i++){
    cout<<endl;
    for(int j=1;j<=n;j++){
      cout<<j;
    }
  }
  return 0;
}