#include <iostream>
#include <cmath> // diperlukan untuk sqrt

using namespace std;

int main()
{
  float a,b,c;
  a = 1.0;
  b = 0.0;
  c = -4.0;

  // Hitung diskriminan
  float d = pow(b,2) - 4*a*c;

  // Tampilkan nilai diskriminan
  cout << d<< endl;

  float x1, x2;
  x1 = (-b + sqrt(d))/(2*a);
  x2 = (-b - sqrt(d))/(2*a);

  // Tampilkan nilai x1 dan x2
  cout << "x1 = " << x1 << endl;
  cout << "x2 = " << x2 << endl;

  return 0;
}
