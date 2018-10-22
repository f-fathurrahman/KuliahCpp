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
  int NDATA = 3;
  Mahasiswa *daftar_mhs;

  daftar_mhs = new Mahasiswa[NDATA];

  daftar_mhs[0].nama = "Jojo";
  daftar_mhs[0].NIM = "A018003";
  daftar_mhs[0].uts = 80;
  daftar_mhs[0].uas = 99;
  daftar_mhs[0].praktikum = 78;

  info_mahasiswa(daftar_mhs[0]);
  info_mahasiswa(daftar_mhs[1]);
  info_mahasiswa(daftar_mhs[2]);

  delete[] daftar_mhs;

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


