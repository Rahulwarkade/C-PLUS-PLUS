#include<iostream>
using namespace std;
/*Virtual Functions in C++
A member function in the base class which is declared using virtual keyword is called virtual functions. They can be redefined in the derived class.*/
class  Base
{
public:
int base_var;
virtual void display(){
  cout<<"1 Displaying the base class base_var = "<<base_var<<endl;
}
};
class Drived : public Base
{
public:
int drived_var=64;
void display(){
  cout<<"2 displaying the drived class base_var = "<<base_var<<endl;
  cout<<"2 displaying the drived class drived var = "<<drived_var<<endl;
}
};
int main(){
  Base *pointerB;
  Base objB;
  Drived objD;
  pointerB = &objD;
  pointerB->base_var=24;
  pointerB->display();
  Drived *pointerD;
  pointerD =&objD;
  pointerD->display();
}
