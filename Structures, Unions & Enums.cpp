#include <iostream>
using namespace std;
  // struct rahul 
  // {
  //   string name;
  //   int age;
  //   float height;
  //   char favChar;
  // } ; 
  union mobile
{
  //string car;
  int rupees;
  float dollars;
  char gold;
};
int main() {
 /*                   STRUCTURES IN C++
 A STRUCT is a C++ data structure that can be used to store together elements of different data types. In C++, a structure is a user-defined data type. The structure creates a data type for grouping items of different data types under a single data type. Suppose you need to store information about someone, their name, citizenship, and 

                         UNIONS IN C++
  A union is a user-defined type in which all members share the same memory location. This definition means that at any given time, a union can contain no more than one object from its list of members.

                        ENUMS IN C++
    Enumeration is a user defined datatype in C/C++ language. It is used to assign names to the integral constants which makes a program easy to read and maintain. The keyword “enum” is used to declare an enumeration. The following is the syntax of enums.                                      */    

//  EXAMPLE OF STRUCTURES IN C++ PROGRAMMING LANGUAGE
// struct rahul value;
// value.name = "rahul warkade ";
// value.age = 19;
// value.height =6.5;
// value.favChar = 'M';
// cout<<"This is my name = "<<value.name<<endl;
// cout<<"This is my age = "<<value.age<<endl;
// cout<<"This is my height = "<<value.height<<endl;
// cout<<"This is my favorite character = "<<value.favChar<<endl;
// EXAMPLE OF UNION IN C++ PROGRAMMING LANGUAGE
// union mobile buy;
//  //buy.car = "IPHONE ";
//  buy.rupees = 200000;
//  buy.dollars = 99;
// buy.gold = 'G';
// //cout<<"This is the name of mobile = "<<buy.car<<endl;
// cout<<"This is the price of mobile = "<<buy.rupees<<endl;
// cout<<buy.dollars<<endl;
// cout<<buy.gold<<endl;

 // EXAMPLE OF ENUMS IN C++ PROGRAMMING LANGUAGE
//  enum kl{b,l,d};
//  kl mq = l;
//  cout<<mq<<endl;

 // HERRY'S  CODE IS STARTING FROM HERE
 /*#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
*/
} 
