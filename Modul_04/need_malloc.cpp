#include <iostream>

using namespace std;

int main()
{
  int NDATA;

  cout << "Masukkan jumlah data ";
  cin >> NDATA;
  
  cout << "Anda memasukkan NDATA = " << NDATA << endl;

  double data[NDATA];

  //float *data;
  //data = new float[NDATA];

  for(int i = 0; i < NDATA; i++) {
    data[i] = (i+1)*0.5;
    cout << i << " " << data[i] << endl;
  }


  //delete[] data;

  return 0;
}
