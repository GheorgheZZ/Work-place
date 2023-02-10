#include <iostream>
using namespace std;

int main() {
  int numere, a, b, c, produs;
  cin >> numere;
  a = numere / 100;
  b = (numere / 10) % 10;
  c = numere % 10;
  produs = a * b * c;
  if (produs % 2 == 0) {
    cout << produs % 10 << endl;
  } else {
    cout << "nu este par" << endl;
  }
  return 0;
}