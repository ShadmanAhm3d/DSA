#include <iostream>
#include <memory>
using namespace std;

// check if you can return a uniquePointer
// how to type cast a smart pointer

void someFunc() {
  unique_ptr<int> p(new int(10));

  cout << *p;

  unique_ptr<int> p2;

  cout << endl;
  p2.reset(new int(300));

  cout << *p2;
}

unique_ptr<int> fucn2(){
  unique_ptr<int>p;
  p.reset(new int(100));

  return p;
}



int main() {
  //someFunc();

  unique_ptr<int> c = fucn2();
  cout << *c ;

  return 0;
}
