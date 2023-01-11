#include<iostream>
using namespace std;
/*Member Friend Functions in C++
Friend functions are those functions that have the access to private members of the class in which they are declared. The main thing to note here is that only that function can access the member function which is made a friend of the other class. 
Friend Classes in C++
Friend classes are those classes that have permission to access private members of the class in which they are declared. The main thing to note here is that if the class is made friend of another class then it can access all the private members of that class.*/
class Complex;
class Calculator
{
  public:
    int add(int a,int b){
      return (a + b);
    }
    int sumOfRealComplex(Complex, Complex);
    int sumOfCom_Complex(Complex, Complex);
};
class Complex
{
  int a,b;
  // friend int Calculator :: sumOfRealComplex(Complex, Complex);
  // friend int Calculator :: sumOfCom_Complex(Complex, Complex);
  friend class Calculator;
  public:
    void setData(int v1,int v2){
      a=v1;
      b=v2;
    }
    void printData(){
      cout<<"This is your complex number "<<a<<" + "<<b<<"i"<<endl;
    }
};
int Calculator :: sumOfRealComplex(Complex o1,Complex o2){
return (o1.a+o2.a);
}
int Calculator :: sumOfCom_Complex(Complex o1,Complex o2){
return (o1.b+o2.b);
}
int main(){
 Complex o1,o2;
 o1.setData(1,4);
 o2.setData(5,7);
 o1.printData();
 o2.printData();
 Calculator o3;
 int res = o3.sumOfRealComplex(o1,o2);
 cout<<"The sum of real part o1 and o2 is "<<res<<endl;
 int resc = o3.sumOfCom_Complex(o1,o2);
 cout<<"The sum of complex  part o1 and o2 is "<<resc<<endl;
}
