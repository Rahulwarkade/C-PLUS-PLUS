#include<iostream>
#include<cstring>
using namespace std;
/*Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.*/
class CWH
{
protected:
string title;
float rating;
public:
CWH(string s,float r){
  title = s;
  rating = r;
}
virtual void display()=0;
};
class CWHvideo: public CWH
{
float vidlen;
public :
CWHvideo(string s,float r , float vl ): CWH(s,r)
{
  vidlen = vl;
}
void display(){
  cout<<"This is amazing vidoe with title "<<title<<endl;
  cout<<"Rating of this video is "<<rating<<"out of 5 star "<<endl;
  cout<<"The length of this video is "<<vidlen<<endl;
}
};
class CWHText : public CWH
{public:
  int word;
  CWHText(string s,float r,int wc):CWH(s,r)
  {
    word = wc;
  }
  void display(){
    cout<<"This web page is foumus in the world "<<title<<endl;
    cout<<"And rating of this website based on google is = "
    <<rating<<endl;
    cout<<"Words in this site is = "<<word<<endl;
  }
};
int main(){
  string title;
  float rating,vidlen;
  int word;
  title = "Learn cpp with harry ";
  rating = 4.99;
  vidlen = 5.99;
  CWHvideo objvideo(title,rating,vidlen);

  title = "cpp notes by code with harry ";
  rating = 5.0;
  word = 99000000.00;
  CWHText objText(title,rating,word);

  CWH *pointer[2];
  pointer[0] = &objvideo;
  pointer[1] = &objText;

  pointer[0]->display();
  pointer[1]->display();

}
