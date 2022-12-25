#include<iostream>
using namespace std;
class shop
{
int itemId[100];
int itemPrice[100];
int counter;
public:
void inItCounter(void){ counter = 0;}
void setItem(void);
void getItem(void);
};
void shop :: setItem(){
  cout<<"Enter item "<<counter+1<<" ID = ";
  cin>>itemId[counter];
  cout<<"\nEnter item Price "<<counter+1<<" = ";
  cin>>itemPrice[counter];
  counter++;
}
void shop:: getItem(){
  for(int i=0; i<counter; i++)
  {
    cout<<i+1<<" ID = "<<itemId[i]<<endl;
    cout<<i+1<<" Price = "<<itemPrice[i]<<endl;
  }
}
int main(void)
{
shop obj;
obj.inItCounter();
for(int i = 0; i<3; i++)
{
obj.setItem();
}
obj.getItem();
}
