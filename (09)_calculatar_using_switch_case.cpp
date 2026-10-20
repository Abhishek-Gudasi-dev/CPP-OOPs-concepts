#include<iostream>
using namespace std;
int main(){
	int a,b;
	char s;
	cout<<"which arithmetic operation do you want to use :";
	cin>>s;
	cout<<"enter both the numbers :";
	cin>>a>>b;
	switch (s)
	{
		case('+'):
		cout<<"the addition is "<<a+b;
		break;
		case('-'):
		cout<<"the substraction is "<<a-b;
		break;
		case('*'):
		cout<<"the multiflilcation is "<<a*b;
		break;
		case('/'):
		cout<<"the division is "<<a/b;
		break;
	default:
	cout<<"invalid operation";
		break;
	}
	return 0;
}