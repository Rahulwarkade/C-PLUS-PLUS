#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
  //  cout<<"vec1,vec2,vec3,vec2,vecx,vecz "<<endl;
for(int r=0; r<v.size(); r++){
  cout<<v[r]<<endl;
  cout<<v.at(r)<<endl;
}
  cout<<"The size of the vector is = "<<v.size();
  cout<<endl;
}
int main(){
  vector<int> vec1;
  vector<int>  :: iterator iter = vec1.begin();
  vec1.insert(iter+1,5,2003);
  vector<float> vecx(2);
  vector<char> vecz(4);
  vector<int> vec2(3);
  vector<int> vec3(vec2);
  vector<int> vec4(6,3);
  display(vec3);
   display(vec2);
   display(vec4);
  display(vecx);
  display(vecz);
  

  int element;
  int size;
  cout<<"please enter a size of a vector "<<endl;
  cin>>size;
  cout<<"Please Enter  "<<size<< " elements for storing in vector "<<endl;
  for(int i=0; i<size; i++){
    cin>>element;
    vec1.push_back(element);
  }
  cout<<endl;
  // display(vec1);
  // vec1.pop_back();
  // cout<<endl;
  vector<int>  :: iterator iter = vec1.begin();
  vec1.insert(iter+1,2003);
  vec1.erase (vec1.begin()+2);
  display(vec1);
}
