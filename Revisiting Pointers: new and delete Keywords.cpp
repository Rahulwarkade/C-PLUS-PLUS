#include<iostream>
using namespace std;
int main(){
  // int a =4;
  // int *ptr = &a;
  // cout<<"This is the value of a = "<<*ptr<<endl;
  float *p = new float(24.98);
  cout<<"The value of p is = "<<*p<<endl;
  int *arr = new int[4];
  arr[0]=24;
  arr[1]=98;
  arr[2]=23;
  arr[3]=689;
  // delete[] arr;
  cout<<"The value of arr(0) is = "<<arr[0]<<endl;
  cout<<"The value of arr(1) is = "<<arr[1]<<endl;
  cout<<"The value of arr(2) is = "<<arr[2]<<endl;
  cout<<"The value of arr(3) is = "<<arr[3]<<endl;
}
