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
  Mahasiswa a;
  a.nama = "Jojo";
  a.NIM = "A018003";
  a.uts = 80;
  a.uas = 99;
  a.praktikum = 78;

  info_mahasiswa(a);

  // using initializer list
  Mahasiswa b;
  b = {"Johann", "A018004", 81, 70, 65};
  info_mahasiswa(b);

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


