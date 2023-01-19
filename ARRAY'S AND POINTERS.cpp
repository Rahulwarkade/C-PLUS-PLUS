 #include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Quick quiz: do the same using while and do-while loops?

    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
//     return 0;
    

    /* ARRAY
    C++ Arrays. Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
Access the Elements of an Array. You access an array element by referring to the index number. Note: Array indexes start with 0: [0] is the first element.
Change an Array Element. Create an array of type string called cars.

In C++, arithmetic operations on pointer variable is similar to a numeric value. As we know that, a pointer in C++ is a variable used to store the memory address which is a numeric value. The arithmetic operations on pointer variable changes the memory address pointed by pointer. Not all arithmetic operations are valid for pointer variable, like multiplication and division. Here is the list of valid pointer arithmetic operations.

Incrementing a pointer.
Decrementing a pointer.
Adding a number to pointer.
Subtracting a number form a pointer.
Comparison on two pointers.
Subtracting two pointers.
And, here is the list of invalid pointer arithmetic operations.
Addition of two pointers.
Division of two pointers.
Multiplication of two pointers.*/


int array[] = {2,5,2,5};
cout<<array[0]<<endl;
cout<<array[1]<<endl;
cout<<array[2]<<endl;
cout<<array[3]<<endl;
// using while loop
int i = 0;
while(i<4){
  cout<<array[i]<<endl;
  i++;
}
cout<<endl<<endl;
i =0;
// using do while loop
do{
  cout<<array[i]<<endl;
  i++;
}while(i<4);
// using for loop
cout<<endl<<endl;
for(int i =0; i<4; i++){
  cout<<array[i]<<endl;
}
int *p = array;
cout<<*P<<endl;
cout<<*(p++<<endl;
cout<<++*p<<endl;
}
