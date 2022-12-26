#include<iostream>
using namespace std;
template<class T1,class T2>
class mulParam
{
T1 a;
T2 b;
public:
 mulParam(T1 s,T2 r){
   a = s;
   b = r;
 }
 void display(){
   cout<<a<<endl<<b<<endl;
 }
};
int main(){
  int y;
  char x;
  cout<<"please enter a character value "<<endl;
  cin>>x;
  cout<<"Please enter a integer value "<<endl;
  cin>>y;
  mulParam<char,int>mal(x,y);
  mal.display();
}
