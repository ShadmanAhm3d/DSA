#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

  unordered_set<int> s;
  s.insert(23);
  s.insert(3);
  s.insert(33);
  s.insert(43);
  s.insert(53);
  s.insert(63);

  for (auto it = s.begin(); it != s.end(); it++)
    cout << (*it) << " ";
  cout << endl;

  // find --> if this number run through the whole table to the end without being interrupted retrun not found else retrun found 
  if (s.find(3) != s.end())
    cout << "found";
  else
    cout << "not found";

 //size ;
 cout << endl <<  s.size() << " " ;

  s.erase(43);


  for (auto it = s.begin(); it != s.end(); it++)
    cout << (*it) << " ";
  cout << endl;


}
