#include <iostream>

using namespace std;

int main()
{
  int Nsize;
  float *nilai;

  cout << "Masukkan jumlah data: ";
  cin >> Nsize;

  nilai = (float*)malloc(Nsize*sizeof(float));

  for(int i = 0; i < Nsize; i++) {
    cout << "Masukkan data ke " << i+1 << endl;
    cin >> nilai[i];
  }

  cout << "Data yang Anda masukkan adalah" << endl;
  for(int i = 0; i < Nsize; i++) {
    cout << nilai[i] << endl;
  }

  free(nilai);

  return 0;
}
