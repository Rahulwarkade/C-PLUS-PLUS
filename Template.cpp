#include<iostream>
using namespace std;
template <class T>
class mom
{
public :
T data;
mom(T a){
  data = a;
}
void display();
};
template <class T>
void mom<T> :: display(){
  cout<<data<<endl;
}
template<class T>
void fun1(T b){
  cout<<"This is templisez function "<<endl;
}
void fun1(int c){
  cout<<"This is called function overloading "<<endl;
}
int main(){
// mom<int> mom(3);
mom<float> mom(4.78);
cout<<mom.data<<endl;
mom.display();
fun1(23);
fun1(23.2);
}
