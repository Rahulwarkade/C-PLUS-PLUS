#include<iostream>
using namespace std;
class Base
{
public:
int var_base;
void display(){
  cout<<"Displaying the base class var-base "<<var_base<<endl;
}
};
class Drived  : public Base
{
public  :
int var_drived;
void display(){
  cout<<"Displaying the base class var_base "<<var_base<<endl;
  cout<<"Displaying the drived class var_drived "<<var_drived<<endl;
}
};
int main(){
  Base *base_point;
  Base objectB;
  base_point = &objectB;
  base_point->var_base =24;
  base_point->display();
  Drived objectD;
  Drived *drive_point;
  drive_point = &objectD;
  drive_point->var_drived=45;
  drive_point->var_base =23;
  drive_point->display();
  /*int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 3400; 
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}
*/
}
