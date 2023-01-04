#include<iostream>
using namespace std;
class Beershing
{
int data1,data2;
public:
  Beershing(int d1,int d2){
   data1=d1;
   data2=d2;
   cout<<"constractor first is running "<<endl;
  }
  void print_B(){
    cout<<"The value of Data 1 is = "<<data1<<endl;
    cout<<"The value of Data 2 is = "<<data2<<endl;
      }
};
class lord_Sunita{
int data1,data2;
public:
 lord_Sunita(int d,int c){
   data1=d;
   data2=c;
   cout<<"constractor second is running "<<endl;
 }
 void print_S(){
   cout<<"The value of const 1 is = "<<data1<<endl;
   cout<<"The value of const 2 is = "<<data2<<endl;
 }
};
class Rahul : public Beershing,virtual public lord_Sunita
{
private:
int data1,data2;
public:
Rahul(int a,int b,int c,int d,int e,int f) :Beershing(a,b),lord_Sunita(c,d)
{
  data1 = e;
  data2 = f;
  cout<<"My constractor is running :"<<endl;
}
void print_R(){
  cout<<"The value of myconst1 is = "<<data1<<endl;
  cout<<"The value of myconst2 is = "<<data2<<endl;
}
};
int main(){
  Rahul object(1,2,3,4,5,6);
  object.print_B();
  object.print_S();
  object.print_R();
}
