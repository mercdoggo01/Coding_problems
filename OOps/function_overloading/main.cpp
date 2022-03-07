#include <iostream>
using namespace std;

void print(int i) {
  cout << " Here is int " << i << endl;
}
void print(double  f) {
  cout << " Here is float " << f << endl;
}
void print(char const *c) {
  cout << " Here is char* " << c << endl;
}
/*
Exact match: (Function name and Parameter)

If a not exact match is found:

->Char, Unsigned char, and short are promoted to an int.
->Float is promoted to double

If no match found:

->C++ tries to find a match through the standard conversion.

ELSE ERROR
*/



int main() {
  print(10);
  print(10.10);
  print("ten");
  return 0;
}
