#include<iostream>
using namespace std;
// simplest example of friend function=>
class Y;
class X{
  int a;
  friend void add(X,Y);
  public:
    void input(int x){
    a =x;
    }
};
class Y{
  int b;
  friend void add(X,Y);
  public:
    void input2(int y){
      b =y;
    }
};
void add(X o1,Y o2){
     cout<<"This is the sum : "<<o1.a+o2.b<<endl;
}
int main(){
  X o1;
  o1.input(24);
  Y o2;
  o2.input2(42);
  add(o1,o2);
}
// complex example of friend function
class C2;
class C1{
  int val1;
  friend void swap(C1 &,C2 &);
  public:
    void input1(int a){
        val1 = a;
    }
     void display(){
      cout<<val1;
    }
};
class C2{
  int val2;
  friend void swap(C1 &,C2 &);
  public:
    void input2(int b){
      val2 =b;
    }
    void display(){
      cout<<val2;
    }
};

void swap(C1 &x ,C2 &y){
  int temp;
  temp = x.val1;
  x.val1= y.val2;
  y.val2 = temp;
}
int main(){
  C1 o1;
  o1.input1(2003);
  o1.display();
  C2 o2;
cout<<endl;
  o2.input2(2002);
  o2.display();
  cout<<endl;
  swap(o1,o2);
  cout<<"Value of c1 after swap is "<<endl;
  o1.display();
cout<<endl;

  cout<<"Value of c2 after swap is "<<endl;
  o2.display();
}
