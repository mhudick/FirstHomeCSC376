#include <iostream>

using namespace std;

int rectVal (int len, int wid);
char name[] = "Mike";

int main(){
  int lengthHouse;
  int widthHouse;
  int lengthGarage;
  int widthGarage;
  cout << "please enter a length of your house" << endl;
  cin >> lengthHouse;
  cout << "please enter a width of your house" << endl;
  cin >> widthHouse;
  cout << "please enter a length of your garage" << endl;
  cin >> lengthGarage;
  cout << "please enter a width of your garage" << endl;
  cin >> widthGarage;
  int totalHouse = rectVal(lengthHouse, widthHouse);
  int totalGarage = rectVal(lengthGarage, widthGarage);
  int percentGarageToHouse = 100 * totalGarage / totalHouse;
  cout << "the total area of the house is: " << totalHouse << endl;
  cout << "the total area of the garage is: " << totalGarage << endl;
  cout << name << "'s garage is " << percentGarageToHouse << "% of the house." << endl;
  return 0;
}

int rectVal (int len, int wid){
  return len * wid;
}
