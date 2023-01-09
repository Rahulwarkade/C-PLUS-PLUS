#include<iostream>
using namespace std;
class Copy
{
int a;
public:
  Copy(){
  a=0;
  }
  Copy(int num){
    a=num;
  }
  Copy(Copy &obj){
    cout<<"Copy constructor is called "<<endl;
    a = obj.a;
  }
  void display(){
    cout<<"The number of this object "<<a<<endl;
  }
};
int main(){
  Copy o1(23),o2,o3,o4;
  o1.display();
  o2.display();
  o3.display();
  Copy r1(o1);
  r1.display();

  o4 = o1;
  o1.display();

  Copy o5 =o3;
  o5.display();

}
