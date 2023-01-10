#include<iostream>
using namespace std;
/*Constructor Overloading in C++
Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument.*/
class miss{
  int a,b;
  public :
   miss(int x,int y){
      a=x;
      b=y;
   }
   miss(int x){
     a=x;
     b =0;
   }
   miss(){
     a=0;
     b=0;
   }
   void print(){
     cout<<"Is this your complex number "<<a<<" + "<<b<<"i"<<endl;
   }
};
int main(){
    miss c1(3,5);
    c1.print();
    miss c2(32);
    c2.print();
    miss c3;
    c3.print();

}
