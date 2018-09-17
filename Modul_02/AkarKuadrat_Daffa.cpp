#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  float a, b, c;
  // berikan nilai a, b, dan c di sini
  a = 2;
  b = 1;
  c = 4;
  // Tampilkan pesan ke layar
  cout << "Mencari akar-akar persamaan kuadrat" << endl;
  cout << endl;
  cout << "a*x^2 + b*x + c = 0" << endl;
  cout << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << endl;

  // Hitung diskriminan di sini
  float D;
  D = b*b - 4*a*c;
  // Tampilkan nilai diskriminan
  cout << "nilai D =" << D << endl;
  // Deklarasi variabel
  float x1,x2;

  if( D >= 0.0 ) {
  // akar real
    x1 = (-b/(2*a) + (sqrt(D))/(2*a));
    x2 = (-b/(2*a) - (sqrt(D))/(2*a));
    cout << "Akar-akar real:" << endl;
    cout << "x1 =" << x1 << endl;
    cout << "x2 =" << x2 << endl;
    // tampilkan x1 dan x2
  }
  else { // akar imajiner
  float xreal,ximajiner;
    xreal = (-b/(2*a));
    ximajiner = (sqrt(-D))/(2*a);
    cout << "Akar-akar imajiner:" << endl;
    cout << "x1 =" << xreal << "+" << ximajiner << "i" << endl;
    cout << "x2 =" << xreal << "-" << ximajiner << "i" << endl;
  }
  return 0;
}
