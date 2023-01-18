
#include<iostream>
using namespace std;
void swap(int &x, int &y){
  int temp = x;
  x = y;
  y = temp; 
}
int main(){
  /*                  CALL BY VALUE
  What is Call by Value method?
Call by value method copies the value of an argument into the formal parameter of that function. Therefore, changes made to the parameter of the main function do not affect the argument.

In this parameter passing method, values of actual parameters are copied to function’s formal parameters, and the parameters are stored in different memory locations. So any changes made inside functions are not reflected in actual parameters of the caller.*/
int a=2,b=4;
cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
swap(a,b);
// This well no make any changes 
cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;

/*                   CALL BY REFFERENCE
Call by reference method copies the address of an argument into the formal parameter. In this method, the address is used to access the actual argument used in the function call. It means that changes made in the parameter alter the passing argument.

In this method, the memory allocation is the same as the actual parameters. All the operation in the function are performed on the value stored at the address of the actual parameter, and the modified value will be stored at the same address.*/
swap(a,b);
cout<<"This is the swap value of a is = "<<a<<" swap value b is = "<<b<<endl;
}

//                  HERRY WORLD
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    // return a;
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
