#include<iostream>
#include<string>
using namespace std;
class binary
{
  string s;
  void check_bin();
  public :
    void enterbin();
    void ones_complement();
};
void binary :: ones_complement(){
check_bin();
  for(int i=0; i<s.length(); i++){
    if(s.at(i)=='1'){
      s.at(i) = '0';
    }
    else{
      s.at(i)='1';
    }
    cout<<s.at(i);
  }
}
void binary :: enterbin(){
  cout<<"Enter a binary number "<<endl;
  cin>>s;
}
void binary :: check_bin(){
  for(int i =0; i<s.length(); i++){
    if(s.at(i) != '1' && s.at(i) != '0'){
      cout<<"worng binary format "<<endl;
      cout<<"please try again "<<endl;
          exit(0);
    }
  }
}
int main(){
  binary r;
  r.enterbin();
  // r.check_bin();
  r.ones_complement();
}
