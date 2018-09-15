#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
  const streamsize MAX_IGNORE = numeric_limits<streamsize>::max();

  float a, b, c;
 
  bool error;

  do {
    error = false;
    cout << endl;
    cout << "Masukkan nilai a: ";
    cin >> a;
    if( cin.fail() ) {
      error = true;
      cout << endl;
      cout << "Nilai yang Anda masukkan tidak valid" << endl;
      cin.clear();
      cin.ignore(MAX_IGNORE,'\n');
    }
  } while(error);


  cin.clear();
  cin.ignore(MAX_IGNORE,'\n');
  do {
    error = false;
    cout << endl;
    cout << "Masukkan nilai b: ";
    cin >> b;
    if( cin.fail() ) {
      error = true;
      cout << endl;
      cout << "Nilai yang Anda masukkan tidak valid" << endl;
      cin.clear();
      cin.ignore(MAX_IGNORE,'\n');
    }
  } while(error);


  cin.clear();
  cin.ignore(MAX_IGNORE,'\n');
  do {
    error = false;
    cout << endl;
    cout << "Masukkan nilai c: ";
    cin >> c;
    if( cin.fail() ) {
      error = true;
      cout << endl;
      cout << "Nilai yang Anda masukkan tidak valid" << endl;
      cin.clear();
      cin.ignore(MAX_IGNORE,'\n');
    }
  } while(error);


  cout << endl;
  cout << "Mencari akar-akar persamaan kuadrat" << endl;
  cout << endl;
  cout << "a*x^2 + b*x + c = 0" << endl;
  cout << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << endl;
  
  float D; // diskriminan
  D = b*b - 4*a*c;

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

  return 0;
}
