#include <iostream>

using namespace std;

int main()
{
  const int Nsize = 4;
  float *nilai;

  nilai = (float*)malloc(Nsize*sizeof(float));

  free(nilai);

  return 0;
}
