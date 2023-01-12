#include<iostream>
using namespace std;
/*Friend Function in C++
Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class. It is necessary to write the prototype of the friend function. One main thing to note here is that if we have written the prototype for the friend function in the class it will not make that function a member of the class.
Properties of Friend Function
Not in the scope of the class
Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid
A friend function can be invoked without the help of any object
Usually contain objects as arguments
Can be declared under the public or private access modifier, it will not make any difference
It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.
#include<iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i 
class Complex{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b))
    ;
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/

class Complex
{
  int a,b;
  friend Complex sumComplex(Complex o1,Complex o2);
  public:
    void setData(int v1,int v2){
      a=v1;
      b=v2;
    }
    void printData(){
      cout<<"The comlex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex  sumComplex(Complex o1, Complex o2){
          Complex o3;
          o3.setData((o1.a+o2.a), (o1.b+o2.b));
          return o3;
}
int main(){
  Complex o1,o2,sum;
  o1.setData(1,4);
  o2.setData(3,5);
  o1.printData();
  o2.printData();
  sum = sumComplex(o1,o2);
  sum.printData();
}
