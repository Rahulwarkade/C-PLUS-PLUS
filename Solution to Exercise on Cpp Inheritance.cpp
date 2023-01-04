#include<iostream>
#include<cmath>
using namespace std;
class Simple_Calculator
{
protected:
int a,b;
public:
void inp(){
  cout<<"Enter a first number "<<endl;
  cin>>a;
  cout<<"Enter a second number "<<endl;
  cin>>b;
}
void calculator(){
  cout<<"The sum of two numbers is = "<<a+b<<endl;
  cout<<"The substraction of two number is = "<<a-b<<endl;
  cout<<"The multiplication of two number is = "<<a*b<<endl;
  cout<<"The division of two number is = "<<a/b<<endl;
}
};
class scientific_calculator : public Simple_Calculator
{
 public:
  void scientific(){
    cout<<"The value of sin(a) is = "<<sin(a)<<endl;
    cout<<"The value of cos(b) is = "<<cos(b)<<endl;
    cout<<"The value of tan(a) is = "<<tan(a)<<endl;
    cout<<"The value of asin(a) is = "<<asin(a)<<endl;
  }
};
int main(){
  scientific_calculator object;
  object.inp();
  object.calculator();
  object.scientific();
}
/*Q1. What type of Inheritance are you using?

Ans = multilavel inheritance

Q2. Which mode of Inheritance are you using?

Ans. public */
