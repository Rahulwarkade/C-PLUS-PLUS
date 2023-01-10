#include<iostream>
#include<math.h>
using namespace std;
/*Parameterized and Default Constructors in C++
Parameterized constructors are those constructors that take one or more parameters. Default constructors are those constructors that take no parameters. The main things to note here are that constructors are written in the public section of the class and the constructors don’t have a return type.*/
class point
{
  int a,b;
  friend void distance(point,point);
  public:
    point(int,int);
    void console(){
      cout<<"The point is ("<<a<<","<<b<<")"<<endl;
    }
};

point :: point(int x,int y){
  a = x;
  b = y;
}
void distance(point o1,point o2){
  cout<<"This is the distance = "<<sqrt(pow((o2.a-o1.a),2)+
  pow((o2.b-o1.b),2));
}
int main(){
  point o1(1,1);
  o1.console();
  point o2 = point(1,1);
  o2.console();
  distance(o1,o2);
}
// # include<iostream>
// # include<math.h>
// using namespace std;
// class point{
//     private:
//     int x;
//     int y;
//     friend void distance(point,point);
//     public:
//     point(int a,int b){
//         x = a;
//         y = b;
//     }
//     void display(void){
//         cout<<"The point is ("<<x<<","<<y<<")"<<endl;
//     }
// };
// void distance(point p1,point p2){
//     float dis=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
//     cout<<"The distance between two points are "<<dis<<endl;
// }
// int main(){
//     point p(5,7);
//     point q=point(2,3);
//     p.display();
//     q.display();
//     distance(p,q);
//     return 0;
// }
