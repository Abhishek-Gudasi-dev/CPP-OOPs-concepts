#include<iostream>
using namespace std;
class Value{
	int a,b;
	public:
	Value(int x,int y){ // parameterized constructor
		a=x;
		b=y;
	}
	void print(void){
		cout<<"the value of a : "<<a<<" and b : "<<b<<endl;
	}
};
int main(){
	Value v1(10,20); // Implicit call
	Value v2= Value (30,40);//Explicit call
	v1.print();
	v2.print();
	return 0;
}