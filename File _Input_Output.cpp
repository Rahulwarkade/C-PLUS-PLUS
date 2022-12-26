#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*Using the member function open:

The member function open is used to connect the text file to the C++ program when passed into it.*/
int main(){
  // cout<<"Enter your full name "<<endl;
  string name;
  // cin>>name;
  // ofstream fun;
  // fun.open("text.txt");
  // getline(fun,name);
  // fun<<name;
  // fun.close();
  ifstream infun;
  infun.open("text.txt");
  // infun>>name;
  // cout<<name;
  while(infun.eof()==0){
    getline(infun,name);
    cout<<name<<endl;
  }
  infun.close();
}
