#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a=34.4321;
	
	cout<<" the value of a is "<<a<<endl;
	cout<<" the value of a is : "<<setw(1)<<a<<endl;
	cout<<" the value of a is : "<<setw(2)<<a<<endl;
	cout<<" the value of a is : "<<setw(4)<<a<<endl;
	cout<<" the value of a is : "<<setw(6)<<a<<endl;
	return 0;
}