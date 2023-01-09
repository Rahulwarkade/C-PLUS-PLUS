#include<iostream>
using namespace std;
/*Dynamic Initialization of Objects Using Constructors
The dynamic initialization of the object means that the object is initialized at the runtime.  Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.*/
class BankDeposit
{
int principalA;
float interestRate;
int year;
float profit;
public:
    //BankDeposit(){}
    BankDeposit(int p,float r,int y);
    BankDeposit(int p,int R, int y);
    void show(){
      cout<<"Your principalA was "<<principalA<<" after "<<year<<" your profit amount is "<<profit<<endl;
    }
};
BankDeposit :: BankDeposit(int p,float r,int y){
  principalA =p;
  interestRate = r;
  year = y;
  profit = principalA;
  for(int i=0; i<y; i++){
    profit = profit*(1+interestRate);
  }
}
BankDeposit :: BankDeposit(int p,int R,int y){
  principalA =p;
  interestRate = float(R)/100;
  year = y;
  profit = principalA;
  for(int i=0; i<y; i++){
    profit = profit*(1+interestRate);
  }
}
int main(){
//BankDeposit bd1,bd2,bd3;
 int p,y;
 float r;
 int R;
 cout<<"Please! Enter the value of p, r and y "<<endl;
 cin>>p>>r>>y;
BankDeposit bd1 = BankDeposit(p,r,y);
bd1.show();
cout<<"Please! Enter the value of p , R and y "<<endl;
cin>>p>>R>>y;
BankDeposit bd2 = BankDeposit(p,R,y);
bd2.show();

}
