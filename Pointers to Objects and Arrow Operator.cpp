#include<iostream>
using namespace std;
class complex
{
int real,imaginary ;
public:
void getData(){
  cout<<"The real part is = "<<real<<endl;
  cout<<"The imaginary part is = "<<imaginary<<endl;
}
void setData(int a,int b){
  real = a;
  imaginary = b;
}
};
int main(){
  // complex obj;
  // complex *ptr = &obj;
  complex *ptr = new complex;
  ptr->setData(1,5);
  ptr->getData();
  complex *arr = new complex[4];
  arr->setData(1,4);
  arr->getData();
}
