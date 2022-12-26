#include<iostream>
using namespace std;
template <class T>
class vector
{
public:
T *arr;
int size;
vector(int m){
  size = m;
  arr = new T[size];
}
T  dotProduct(vector &v){
  T d=0;
for(int i =0; i<size; i++){
  d += this->arr[i]*v.arr[i];
}
return d;
}
};

int main(){
vector<int> v1(3);
v1.arr[0] = 23;
v1.arr[1] = 22;
v1.arr[2] = 24;
vector<int> v2(3);
v2.arr[0] = 98;
v2.arr[1] = 97;
v2.arr[2] = 99;
int a =v1.dotProduct(v2);
cout<<"This is the product of int type = "<<a<<endl;
vector<float> v3(3);
v3.arr[0] = .23;
v3.arr[1] = .22;
v3.arr[2] = .24;
vector<float> v4(3);
v4.arr[0] = .98;
v4.arr[1] = .97;
v4.arr[2] = .99;
float b =v3.dotProduct(v4);
// vector<double> v3(3); //vector 1 with a float data type
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = 0.1;
//     vector<double> v4(3); //vector 2 with a float data type
//     v2.arr[0]=0.1;
//     v2.arr[1]=1.90;
//     v2.arr[2]=4.1;
//     double b = v1.dotProduct(v2);
    // cout<<b<<endl;
cout<<"This is the product of float type = "<<b<<endl;
return 0;
}
