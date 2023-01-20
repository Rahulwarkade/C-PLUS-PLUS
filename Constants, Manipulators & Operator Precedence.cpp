#include <iostream>
#include<iomanip>
using namespace std;
int main() {
  /* constants
  Constants refer to as fixed values, unlike variables whose value can be altered, constants - as the name implies does not change, they remain constant. Constant must have to be initialized at the time of creating it, and new values cannot be assigned later to it.

Constants are also called literals.
Constants can be any of the data types.
It is considered best practice to define constants using only upper-case names.

There are two other different ways to define constants in C++. These are:

By using const keyword
By using #define preprocessor */
const int A = 4;
cout<<"The value of A is "<<A<<endl;
// A = 5; this will generate error

/* MANIPULATORS 
In C++ programming, language manipulators are used in the formatting of output. The two most commonly used manipulators are: "endl" and "setw".

"endl" is used for the next line.
"setw" is used to specify the width of the output.*/
int a = 3, b = 321, c= 4321;
cout<<"The value of a is with setw "<<setw(4)<<a<<endl;
cout<<"The value of b is with setw "<<setw(4)<<b<<endl;
cout<<"The value of c is with setw "<<setw(4)<<c<<endl;
cout<<endl<<endl;
cout<<"The value of a is without setw "<<a<<endl;
cout<<"The value of b is without setw "<<b<<endl;
cout<<"The value of c is without setw "<<c<<endl;
// return 0;

/* OPERATOR PRECEDENCE AND ASSOCIATIVTY
Operator precedence helps us to solve an expression. For example, in an expression "int c = a*b+c" the multiplication operator's precedence is higher than the precedence of addition operator, so the multiplication between "a & b" first and then addition will be performed.

ASSOCIATIVTY
Operator associativity helps us to solve an expression; when two or more operators have the same precedence, the operator associativity helps us to decide that we should solve the expression from "left-to-right" or from "right-to-left".*/

// a = 1,b= 2,c=3;
// cout<<(((a*4)+(b/2))-(c*4))<<endl;
     a =3, b=4;
    // int c = (a*5)+b;
    c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}
