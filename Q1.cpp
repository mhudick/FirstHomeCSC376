#include <iostream>

using namespace std;

char name[] = "Mike";

int main(){
  int height;
  int width;
  int length;
  cout << "please enter a height" << endl;
  cin >> height;
  cout << "please enter a height" << endl;
  cin >> length;
  cout << "please enter a height" << endl;
  cin >> width;
  int total = height * length * width;
  cout << "Hello " << name <<  " your total area is: " << total << endl;
  return 0;
}
