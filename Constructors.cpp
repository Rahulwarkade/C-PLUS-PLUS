#include<iostream>
using namespace std;
/*Constructors in C++

A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address*/
class rahul
{
int a,b;
public:
  rahul(void);
  void prin(){
    cout<<"This is  your complex number = "<<a<<" + "<<b<<"i"<<endl;
  }
};
rahul :: rahul(void){
  a = 327;
  b = 3874;
}
int main(){
  rahul run;
  run.prin();
}
