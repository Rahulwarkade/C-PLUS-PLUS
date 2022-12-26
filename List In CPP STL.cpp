#include<iostream>
#include<list>
using namespace std;
void display(list<int> &li){
  list<int> :: iterator it;
for(it = li.begin(); it!=li.end(); it++){
  cout<<*it<<endl;
}
cout<<endl<<endl<<endl;
}
int main(){
  list<int>   list1;
  list1.push_back(23);
  list1.push_back(78);
  list1.push_back(21);
  list1.push_back(98);
  list1.push_back(12);
  list1.push_back(24);
  list<int> :: iterator it;
  it = list1.begin();
  cout<<*it<<endl;
  *it++;
  cout<<*it<<endl;
   *it++;
  cout<<*it<<endl;
   *it++;
  cout<<*it<<endl;
   *it++;
  cout<<*it<<endl;
   *it++;
     cout<<*it<<endl;
list1.pop_back();
list1.pop_back();
list1.pop_back();
list1.pop_front();
list1.remove(98);
list1.sort();

display(list1);
list<int> list2;
list2.push_back(67);
list2.push_back(76);
list2.push_back(89);
list2.push_back(98);
list2.push_back(677);
display(list2);
list1.merge(list2);
list1.reverse();
// list1.clear();
display(list1);
}
