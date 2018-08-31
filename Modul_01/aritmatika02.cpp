#include <iostream>
using namespace std;

int main()
{
  float a, b;
  float c;

  a = 123.0;
  b = 456.0;

  c = a + b;
  cout << a << " + " << b << " = " << c << endl;

  c = a - b;
  cout << a << " - " << b << " = " << c << endl;

  c = a * b;
  cout << a << " * " << b << " = " << c << endl;

  c = a / b;
  cout << a << " / " << b << " = " << c << endl;

  return 0;
}