#include<iostream>
using namespace std;

template<class a,class s=int>
class Sum{
    public:
        double sum(a p,s q);
};
template<class a,class s>
double Sum<a,s>:: sum(a p,s q){
            return p+q;
        }
int main(){
    Sum<int,int> s1;
    int r=s1.sum(3,4);
    cout<<"the sum is : "<<r<<endl;

    Sum<float> s2;
    float f=s2.sum(3.4,4.3);
    cout<<"the sum is : "<<f<<endl;

    return 0;
}