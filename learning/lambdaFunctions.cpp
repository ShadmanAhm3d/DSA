#include<iostream>

using namespace std;


int main(){
  int a =12; 
  int b = 24;

  //This is pass by value by the way.
  [=,&b]() -> void {
    cout << a << " " << b ;
    b++;
    cout << a << " " << b ;

  }();

  return 0 ;
}
