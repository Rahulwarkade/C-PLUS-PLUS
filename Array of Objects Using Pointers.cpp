#include<iostream>
using namespace std;
/*Array of Objects Using Pointers in C++

Array of objects can be defined as an array that’s each element is an object of the class. In this tutorial, we will use the pointer to store the address of an array of objects.*/
class shopItem
{
int id;
float price;
public:
void setData(int a, float b){
  id = a;
  price = b;
}
void getData(){
  cout<<"This is your id number "<<id<<endl;
  cout<<"This is your id price "<<price<<endl;
}
} ;
int main(){
  shopItem *ptr = new shopItem[3];
  shopItem *fptr = ptr;
  int q;
  float r;
  for(int i =0;i<3; i++){
    cout<<"Enter your id and price :"<<i+1<<endl;
    cin>>q>>r;
    (*ptr).setData(q,r);
    ptr++;
  }
  for(int j = 0; j<3; j++){
   cout<<"item number :"<<j+1<<endl;
   fptr->getData();
   fptr++;
  }
}
