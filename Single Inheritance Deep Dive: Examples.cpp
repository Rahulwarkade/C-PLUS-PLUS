#include<iostream>
using namespace std;
/*Single Inheritance in C++
Single inheritance is a type of inheritance in which a derived class is inherited with only one base class. For example, we have two classes “employee” and “programmer”. If the “programmer” class is inherited from the “employee” class which means that the “programmer” class can now implement the functionalities of the “employee” class.*/
class Base
{
int Data1;
public:
   int Data2;
   void setData();
   int getData1();
   int getData2();
};
void Base :: setData(){
  Data1 = 100;
  Data2 = 200;
}
int Base :: getData1(){
     return Data1;
}
int Base :: getData2(){
  return Data2;
}
class Drived : public Base 
{
 int Data3;
 public:
   void process();
   void display();
};
void Drived :: process(){
  Data3 = Data2*getData1();
}
void Drived :: display(){
  cout<<"The value of Data 1 is = "<<getData1()<<endl;
  cout<<"The value of Data 2 is = "<<Data2<<endl;
  cout<<"The value of Data 3 is = "<<Data3<<endl;
}
int main(){
  Drived rah;
  rah.setData();
  rah.process();
  rah.display();
}
