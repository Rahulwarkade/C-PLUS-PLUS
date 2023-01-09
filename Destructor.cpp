#include<iostream>
using namespace std;
/*Destructor in C++
A destructor is a type of function which is called when the object is destroyed. Destructor never takes an argument nor does it return any value*/
int count = 0;
class num
{
public:
  num(){
    count++;
    cout<<"This is the time when constractor is called for "
    <<"object nomber = "<<count<<endl;
  }
  ~num(){
    cout<<"This is the time when destructor is called "
    <<"for object number "<<count<<endl;
    count--;
  }
};
int main(){
  cout<<"Entering to the main function "<<endl;
  cout<<"Creating an object "<<endl;
  num obj1;
  {
    cout<<"Entering to the black "<<endl;
    cout<<"Creating an two object "<<endl;
    num obj2,obj3;
    cout<<"Exeting from the block "<<endl;
  }
  cout<<"Back to the main function "<<endl;
}
