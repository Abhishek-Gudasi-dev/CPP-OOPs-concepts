#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number of multiflication table you want";
    cin>>a;
    cout<<"the multiflication table is :"<<endl;
    for (int i = 1; i < 11; i++)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;

    }
    return 0;
}  