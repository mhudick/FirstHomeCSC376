#include <iostream>

using namespace std;

void rectVal (int& area, int& volume, int len, int wid, int height);
char name[] = "Mike";

int main(){
  int length;
  int width;
  int height;
  int area;
  int volume;
  cout << "please enter a length of your house" << endl;
  cin >> length;
  cout << "please enter a width of your house" << endl;
  cin >> width;
  cout << "please enter a height of your house" << endl;
  cin >> height;
  rectVal(area, volume, length, width, height);
  cout << name << " has a house with " << area << " square feet that contains " << volume << " cubic feet." << endl;
  return 0;
}

void rectVal (int& area, int& volume, int len, int wid, int height){
  area = len * wid;
  volume = len * wid *height;
}
