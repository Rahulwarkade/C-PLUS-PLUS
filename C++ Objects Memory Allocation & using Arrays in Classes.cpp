#include<iostream>
using namespace std;
class shop
{
  int itemName[100];
  int itemPrice[100];
  int itemNumber;
  public :
    void initemNumber(){itemNumber = 0;}
    void storeName();
    //void storePrice();
    void printIt();
};
void shop :: storeName(){
    cout<<"Please enter your shop's item name "<<itemNumber+1<<" = "<<endl;
    cin>>itemName[itemNumber];
    cout<<"Please enter your item price price "<<endl;
    cin>>itemPrice[itemNumber];
    itemNumber++;
}
void shop :: printIt(){
  for(int i =0; i<itemNumber; i++){
    cout<<"This your itemName = "<<itemName[i]<<endl<<endl;
    cout<<"This is your itemPrice = "<<itemPrice[i]<<endl<<endl;
  }
}
 int main(){
    shop Rah;
    Rah.initemNumber();
    for(int i = 0; i<=5; i++){
    Rah.storeName();
    }
    Rah.printIt();
 }
