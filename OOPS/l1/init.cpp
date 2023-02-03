// Competitive Programming Setup
#include <iostream>
#include <ostream>
using namespace std;

class Hero {
private:
  int health;

public:
 char level;


 
//Deafualt Constructor 
 Hero(){
   cout << "Defalut" <<endl;
 }

//Parameterized constructor
  Hero( int health, char le){
     this ->health = health;
     this ->level = le;
  }
 
  void printall () {
     cout <<"Health" <<health << endl ;
     cout <<"lelvel" <<level << endl ;
  }
  
  
  int getHealth() { return health; }

  void setHealth(int h) { health = h; }
};

int main() {
  


  Hero Itachi(4,'A') ;
  Itachi.printall();


  //This is copy constructor
  Hero Eren(Itachi);
  Eren.printall();










  /* Hero JIN(4,'B');
  cout <<" Health " << JIN.getHealth();
  cout <<" lev " << JIN.level; */



  /* // Static allocation
  Hero paul;

  paul.level = 'A';
  paul.setHealth(2);
  cout << "Pauls level : " << paul.level << endl;
  cout << "Pauls health : " << paul.getHealth() << endl;

  // dynamic
  Hero *law = new Hero;
  law->setHealth(44);
  law->level = 'B';

  cout << "law level : " << law->level << endl;
  cout << "law health : " << law->getHealth() << endl; */

  /* paul.level = 'B';
  cout << "helth1 " << paul.getHealth() << endl;

   paul.setHealth(4);
  cout << "Level " << paul.level << endl;
  cout << "helth " << paul.getHealth() << endl; */
  return 0;
}
