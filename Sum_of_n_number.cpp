#include<iostream>
using namespace std;
int main()
{
  int n,sum=0;
  cout<<"enter the value of N :";
  cin>>n;
  for(int count=1;count<=n;count++)
    {
      sum+=count;
    }
  cout<<" the sum is "<<sum;
  return 0;
}