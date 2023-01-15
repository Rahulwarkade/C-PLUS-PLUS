#include<iostream>
using namespace std;
class employee
{
  private :
    int a,b,c;
  public :
    int d,e;
void assigndata( int x, int y, int z);
  // void printdata(int d5, int e2);
void printdata(){
  cout<<d<<endl;
  cout<<e<<endl;
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
}
};
  void employee :: assigndata(int a1, int b2, int c3){
    a = a1;
    b = b2;
    c = c3;
  }
int main(){
  employee rah;
  rah.d = 55;
  rah.e = 66;
  rah.assigndata(11,22,33);
  rah.printdata();


  /* Classes in C++
Classes are user-defined data-types and are a template for creating objects. Classes consist of variables and functions which are also called class members.

Public Access Modifier in C++
All the variables and functions declared under public access modifier will be available for everyone. They can be accessed both inside and outside the class. Dot (.) operator is used in the program to access public data members directly.

Private Access Modifier in C++
All the variables and functions declared under a private access modifier can only be used inside the class. They are not permissible to be used by any object or function outside the class.*/
}

