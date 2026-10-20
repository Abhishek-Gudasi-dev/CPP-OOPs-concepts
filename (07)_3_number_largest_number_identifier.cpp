#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the 3 numbers";
	cin>>a>>b>>c;
	if((a>=b)&&(a>=c)){
		cout<< "the largest number is "<<a<<endl;
	}
	else if((b>=a)&&(b>=c)){
		cout<<"the largest number is "<<b<<endl;
	}
	else{
		cout<<"the largest number is "<<c<<endl;
	}
	
	return 0;
}