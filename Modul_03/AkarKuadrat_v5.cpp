#include <iostream>
#include <cmath>

using namespace std;

void selamat_datang();
float baca_input_a();
float baca_input_b();
float baca_input_c();
void tampilkan_abc(float a, float b, float c);
float hitung_diskriminan(float a, float b, float c);
void hitung_dan_tampilkan_akar(float a, float b, float c);

int main()
{
  selamat_datang();

  float a, b, c;
  a = baca_input_a();
  b = baca_input_b();
  c = baca_input_c();

  tampilkan_abc(a, b, c);

  hitung_dan_tampilkan_akar(a, b, c);
  
  return 0;
}

void selamat_datang()
{
  cout << "Selamat datang" << endl;
  cout << endl;
  cout << "Saya adalah program untuk menghitung akar-akar persamaan kuadrat" << endl;
  cout << endl;
  cout << "a*x^2 + b*x + c = 0" << endl;
  cout << endl;
  cout << "Copyright: Jaka Sembung (2018)" << endl;
  cout << endl;
}


float baca_input_a()
{
  float a;
  cout << "Masukkan nilai a: ";
  cin >> a;
  return a;
}

float baca_input_b()
{
  float b;
  cout << "Masukkan nilai b: ";
  cin >> b;
  return b;
}


float baca_input_c()
{
  float c;
  cout << "Masukkan nilai c: ";
  cin >> c;
  return c;
}

void tampilkan_abc(float a, float b, float c)
{
  cout << endl;
  cout << "Berikut ini adalah nilai a, b, dan c yang telah saya baca" << endl;
  cout << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << endl;
}

void hitung_dan_tampilkan_akar(float a, float b, float c)
{
  float D;
  D = hitung_diskriminan(a,b,c);
  
  cout << "D = " << D << endl;
  cout << endl;

  float x1, x2;
  float x_real, x_imag;

  if( D >= 0.0 ) {

    x1 = (-b + sqrt(D))/(2*a);
    x2 = (-b - sqrt(D))/(2*a);

    cout << "Akar-akar real:" << endl;
    cout << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

  }
  else {

    // akar imajiner
    x_real = -b/(2*a);
    x_imag = abs(sqrt(-D)/(2*a));

    cout << "Akar-akar imajiner:" << endl;
    cout << endl;
    cout << "x1 = " << x_real << " + " << x_imag << "i" << endl;
    cout << "x2 = " << x_real << " - " << x_imag << "i" << endl;

  }

}

float hitung_diskriminan(float a, float b, float c)
{
  float D;
  D = b*b - 4*a*c;
  return D;
}
