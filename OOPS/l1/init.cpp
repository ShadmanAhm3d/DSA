// Competitive Programming Setup
#include <iostream>
#include <ostream>
using namespace std;

class Hero {
private:
  int health;

public:
  char level;

  int getHealth() { return health; }

  void setHealth(int h) { health = h; }
};

int main() {

  Hero paul;
  paul.level = 'B';
  cout << "helth1 " << paul.getHealth() << endl;

   paul.setHealth(4);
  cout << "Level " << paul.level << endl;
  cout << "helth " << paul.getHealth() << endl;
  return 0;
}
