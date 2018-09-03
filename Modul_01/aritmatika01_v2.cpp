#include <iostream>
using namespace std;

int main()
{
  int a, b;
  float c;

  a = 123;
  b = 456;

  c = a + b;
  cout << a << " + " << b << " = " << c << endl;

  c = a - b;
  cout << a << " - " << b << " = " << c << endl;

  c = a * b;
  cout << a << " * " << b << " = " << c << endl;

  c = (float)a / b;
  cout << a << " / " << b << " = " << c << endl;

  return 0;
}