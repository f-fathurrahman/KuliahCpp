#include <iostream>

using namespace std;

void func1(int a, int b);
void func2(int& a, int& b);

int main()
{
  int a = 1, b = 3;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  func1(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  func2(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}

void func1(int a, int b)
{
  a = 33;
  b = 44;
}

void func2(int &a, int &b)
{
  a = 99;
  b = 88;
}

