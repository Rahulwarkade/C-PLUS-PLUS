#include<iostream>
#include<fstream>
using namespace std;
/*File I/O in C++: Reading and Writing Files
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class*/
int main(){
  string file = "I love computer ";
  ofstream ucon("chekfile.txt");
  ucon<<file;
  string tfile;
  ifstream con("filechek.txt");
  getline(con,tfile);
  con>>tfile;
  cout<<tfile<<endl;
}
