#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
  string str1 = "This is a string";
  cout << "str1 = " << str1 << endl;

  // initialize with a C-string
  string str2("This is a also a string");
  cout << "str2 = " << str2 << endl;

  printf("str1 = %s\n", str1.c_str());
  
  printf("str2 = %s\n", str2); // will give warning and incorrect output

  return 0;
}

