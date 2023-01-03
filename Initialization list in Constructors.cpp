#include<iostream>
using namespace std;
class Test
{
int a;
int b;
public:
//  Test(int i,int j): a(i),b(j)
//  Test(int i,int j): a(i),b(i+j)
//  Test(int i,int j): a(i),b(2*j)
//  Test(int i,int j): a(i),b(a+j)
// Test(int i, int j) : b(j), a(i+b)
Test(int i, int j) : a(i), b(a + j)
 {
  //  a = i;
  //  b=j;
   cout<<"This constructor is excuted "<<endl;
 }
 void runtest(){
    cout<<"The value of a is "<<a<<endl;
   cout<<"The value of b is "<<b<<endl;
 }
};
int main(){
  Test object(4,6);
  object.runtest();
  }
