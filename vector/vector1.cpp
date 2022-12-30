#include <iostream>
#include <vector>
using namespace std;


int main() {
  //creation
    vector<int> v;
  cout << "capacity :" << v.capacity() << endl;
  v.push_back(6);

  v.push_back(4);
  v.push_back(7);
  v.push_back(9);
  cout << "capacity :" << v.capacity() << endl;
  cout << "Size :" << v.size() << endl;
  cout << "Element at index second :" << v.at(2)<< endl;
  cout << "Element at front  :" << v.front()<< endl;
  cout << "Element at back  :" << v.back()<< endl;
  cout << "b4r pop " << " ";
  for (int i :v ){
    cout <<  i << " " ;

  }
  v.pop_back();
  cout << "after pop " << " ";
  for (int i :v ){
    cout <<  i << " " ;

  }
}
