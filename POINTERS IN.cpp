#include<iostream>
using namespace std;
int main(){
  /* POINTER IN C++
  DEFINATION
  Pointer is a variable that points to or references a memory location in which data is stored. Each memory cell in the computer has an address that can be used to access that location so a pointer variable points to a memory location we can access and change the contents of this memory location via the pointer.

Pointer declaration:
A pointer is a variable that contains the memory location of another variable. The syntax is as shown below. You start by specifying the type of data stored in the location identified by the pointer. The asterisk tells the compiler that you are creating a pointer variable. Finally you give the name of the variable.

POINTERS TO POINTERS
Pointers to pointers C++ allows the use of pointers that point to pointers, that these, in its turn, point to data (or even to other pointers). The syntax simply requires an asterisk (*) for each level of indirection in the declaration of the pointer:

type * variable name

//Example:
int *ptr ;
float *string ;*/
int a = 3;
int *b = &a;
int **c= &b;
cout<<"This is the address of a = "<<&a<<endl;
cout<<"This is the address of a = "<<b<<endl;

cout<<"This is the value of a = "<<*b<<endl;
cout<<"This is the value of a = "<<**c<<endl;//pointers to pointer 
// this will print the value 
cout<<"This is the value of a = "<<*c<<endl;
// and this will print the address
// ----> & this will give the address of the oprend
// ----> * this will give the value of the oprend

//HERRYS WORLD

/*
Pointers in C++
A pointer is a data type which holds the address of other data type. The “&” operator is called “address off" operator, and the "*” operator is called “value at” dereference operator

Pointer to Pointer
Pointer to Pointer is a simple concept, in which we store the address of one Pointer to another pointer.


#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}*/

}
