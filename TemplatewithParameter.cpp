#include<iostream>
using namespace std;
template<class T1=int,class T2=char,class T3=float>
class defpara
{
T1 x;
T2 y;
T3 z;
public:
defpara(T1 a,T2 b,T3 c){
  x = a;
  y = b;
  z = c;
}
void display(){
  cout<<"This is the value of x = "<<x<<endl;
  cout<<"This is the value of y = "<<y<<endl;
  cout<<"This is the value of z = "<<z<<endl;
}
};
int main(){
  defpara<> rahul(3,'c',2.4);
  rahul.display();
  cout<<endl;
  defpara <float,int,char> kumar(35.4,34,'R');
  kumar.display();
}
