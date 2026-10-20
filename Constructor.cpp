#include<iostream>
using namespace std;
class Value{
	int a,b;
	public:
	Value(){ // constructor
		a=0;
		b=10;
	}
	void print(void){
		cout<<"the value of a : "<<a<<" and b : "<<b<<endl;
	}
};
int main(){
	Value v1,v2;//object creation 
	v1.print();
	v2.print();
	return 0;
}