#include <iostream>

using namespace std;

int recurse(int n);

int main(){
  int n;
  cout << "please enter your N number" << endl;
  cin >> n;
  n = recurse(n);
  cout << n << endl;
  return 0;
}

int recurse(int n){
  if (n == 1){
    n = 3;
    return n;
  }
  else if (n == 2){
    n = 4;
    return n;
  }
  else if (n > 2){
    n = recurse(n-1) + recurse(n-2);
    return n;
  }
}
