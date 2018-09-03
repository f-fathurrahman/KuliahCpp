// Nama:
// NIM:
#include <iostream>
using namespace std;

int main()
{
  int a, b;
  float c;

  a = 123;
  b = 456;

  // Tampilkan nilai a and b ke layar
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // Lakukan perhitungan tambah, kurang, kali, dan bagi
  c = a + b;
  cout << "a + b = " << c << endl;
  
  c = a - b;
  cout << "a - b = " << c << endl;

  c = a * b;
  cout << "a * b = " << c << endl;

  c = (float)a / b;
  cout << "a / b = " << c << endl;

  return 0;
}
