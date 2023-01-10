#include<iostream>
using namespace std;
/*Constructors with Default Arguments in C++
Default arguments of the constructor are those which are provided in the constructor declaration. If the values are not provided when calling the constructor the constructor uses the default arguments automatically. */
class simple
{
int data1,data2,data3;
public:
  simple(int x,int y=897,int z=98){
    data1 =x;
    data2 =y;
    data3 =z;
  }
  void print();
};
void simple :: print(){

  cout<<"The value of data1,data3 and data3 is "<<data1<<" ,"<<data2<<
  " and "<<data3<<endl;
}
int main(){
  simple x = simple(21);
  x.print();
}
