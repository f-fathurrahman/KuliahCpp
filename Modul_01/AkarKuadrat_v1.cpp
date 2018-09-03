#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float a, b, c;
  
  a = 1;
  b = 4;
  c = 4;
  
  float d;
  
  d = b*b - 4*a*c;
  cout << "d = " << d << endl;

  float x1, x2;
  x1 = (-b + sqrt(d))/(2*a);
  x2 = (-b - sqrt(d))/(2*a);

  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;

  return 0;
}