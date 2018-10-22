#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
  string nama;
  string NIM;
  float uts;
  float uas;
  float praktikum;
};

void info_mahasiswa(Mahasiswa a);

int main()
{
  int NDATA;

  cout << "Masukkan jumlah mahasiswa ";
  cin >> NDATA;

  Mahasiswa daftar_mhs[NDATA];

  for(int i = 0; i < NDATA; i++) {
    info_mahasiswa(daftar_mhs[i]);
  }

  return 0;
}

void info_mahasiswa(Mahasiswa m)
{
  cout << endl;
  cout << "Nama            : " << m.nama << endl;
  cout << "NIM             : " << m.NIM << endl;
  cout << "Nilai UTS       : " << m.uts << endl;
  cout << "Nilai UAS       : " << m.uas << endl;
  cout << "Nilai praktikum : " << m.praktikum << endl;
}


