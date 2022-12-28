#include<iostream>
#include<cstring>
using namespace std;
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
virtual void display(){cout<<"constructor first is running "<<endl;}
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
