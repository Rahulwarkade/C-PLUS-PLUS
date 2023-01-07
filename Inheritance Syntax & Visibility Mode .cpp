#include<iostream>
using namespace std;
/*Inheritance Syntax and Visibility mode in C++
Inheritance is a process of inheriting attributes of the base class by a derived class. 
After writing the class keyword we have to write the derived class name and then put a “:” sign.
After “:” sign we have to write the visibility mode and then write the base class name.
Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited*/
class Employee
{
public:
int salary;
int id;
  Employee(int inid){
    id=inid;
    salary = 1100000;
  }
  Employee(){}
};
class Programmer : public Employee
  {
    public:
    int languagecode;
      Programmer(int inpu)
      {
        id = inpu;
        languagecode = 335;
      }
      void getData(){
        cout<<id<<endl;
      }
  };
int main(){
  Employee rahul(23),kumar(34);
  cout<<rahul.salary<<endl;
  cout<<kumar.salary<<endl;
  Programmer skillF(42);
  skillF.getData();
  cout<<skillF.languagecode<<endl;
  cout<<skillF.id<<endl;
}
