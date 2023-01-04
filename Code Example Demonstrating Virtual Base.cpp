#include<iostream>
using namespace std;
/*Virtual Base Class in C++
The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances.*/
class Student
{
protected:
int roll;
public:
 void set_roll(int rn){
   roll = rn;
 }
void print_rollNumber(){
   cout<<"This is your roll number : = "<<roll<<endl;
  }
};
class Test : virtual public Student
{
 protected:
  float math,physics,chemistry,hindi,english;
public:
void set_mark(float m,float p,float ch,float hi,float en){
  math = m;
  physics = p;
  chemistry = ch;
  hindi = hi;
  english = en;
}
void print_mark(){
  cout<<"This is your mark in math subject : = "<<math<<endl
      <<"This is your mark in physics subject : = "<<physics<<endl
      <<"This is your mark in chemistry subject :  ="    <<chemistry<<endl
      <<"This is your mark in hindi subject : = "<<hindi<<endl
      <<"This is your mark in english subject : = "<<english<<endl;
}
};
class Sports : public virtual Student
{
protected:
int score;
public:
void set_ptscore(int pt){
  score = pt;
}
void get_score(){
  cout<<"This is your pt score in sports : = "<<score<<endl;
}
};
class Result : public Test,public Sports
{
private:
float total;
public:
void set_results(){
  total = math+chemistry+physics+hindi+english;
}
void get_results(){
  print_rollNumber();
  print_mark();
  set_results();
  cout<<"This is your final result : = "<<total<<endl;
}
};
int main(){
  Result rahul;
  rahul.set_roll(99);
  rahul.set_mark(60.0,80.0,87.0,66.0,90.0);
  // rahul.set_results();
  rahul.get_results();
}
