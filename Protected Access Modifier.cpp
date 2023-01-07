#include<iostream>
using namespace std;
/*Protected Access Modifiers in C++
Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived class. A table is shown below which shows the behavior of access modifiers when they are derived “public”, “private”, and “protected”.

              Public Derivation  Private Derivation    	Protected 
Private  Not Inherited   Not Inherited  Not Inherited              
Protected           	Protected                    	Private                         	Protected                    
Public           	Public	Private                         	Protected                    */
class Base
{
protected:
int a;
private:
int b;
};
class Drived : protected Base
{

};
int main(){
  Base b;
  Drived d;
}
