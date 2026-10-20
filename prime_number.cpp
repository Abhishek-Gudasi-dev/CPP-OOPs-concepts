#include<iostream>
using namespace std;
int main()
{
  int n,Switch=0;
  cout<<"Enter a number : ";
  cin>>n;
  for(int i=2;i<n;i++)
    {
      if(n%i==0){
        Switch=1;
      }
    }
  if(Switch){
    cout<<"the number"<<n<<"is not a prime number"<<endl;
  }
  else
       {
         cout<<"the number "<<n<<"is a prime number"<<endl;
       }

  return 0;
}
