#include<iostream>
using namespace std;

template<class s>
class Vector{
  public:
    int size;
   
    Vector(int size){
      this->size=size;
      s *arr=new s[size];
    }

    s dotproduct(Vector &v){
       s result=0;
       for(int i=0;i<size;i++){  
       result+=this->arr[i]*v.arr[i];
    }
    return result;
  }
  
};

int main(){
 Vector<int>vec1(3);
 vec1.arr[0]=1;
 vec1.arr[1]=0;
 vec1.arr[2]=4;

 Vector<int>vec2(3);
 vec2.arr[0]=4;
 vec2.arr[1]=9;
 vec2.arr[2]=2;

 int result=vec1.dotproduct(vec2);
 cout<<"the dot product of the vectors :"<<endl
     <<vec1.arr[0]<<"i+"<<vec1.arr[1]<<"j+"<<vec1.arr[2]<<"k+"<<endl
     <<vec2.arr[0]<<"i+"<<vec2.arr[1]<<"j+"<<vec2.arr[2]<<"k+"<<endl
     <<" is :"<<result;
     return 0;
}