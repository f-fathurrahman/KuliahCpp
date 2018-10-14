#include <iostream>

using namespace std;

float hitung_rata2( int Ndata, float *data );

int main()
{
  const int N = 10;

  float nilai[N] = {40.9, 45.3, 55.3, 55.1, 33.1,
                    11.7, 34.1, 13.2, 33.3, 34.1};
  
  cout << "Nilai rata = " << hitung_rata2(N, nilai) << endl;

  return 0;
}

float hitung_rata2( int Ndata, float *data )
{
  float ssum = 0.0;
  for(int i = 0; i < Ndata; i++) {
    ssum = ssum + data[i];
  }
  return ssum/Ndata;
}
