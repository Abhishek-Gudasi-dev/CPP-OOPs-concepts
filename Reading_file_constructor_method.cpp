#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

//read file...
ifstream in("Sample.txt");
string st;
//in>>st; it reads only first word
//to read full file till the end
while(in.eof()==0){
getline(in,st);

cout<<st<<endl;
}
in.close();

//write file...
ofstream out;
out.open("Sample.txt",ios::app);
st="the is an example of write in file operation";
out<<st;
out.close();
return 0;
}
