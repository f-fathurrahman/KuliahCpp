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
  float nilai_akhir;
};

void info_mahasiswa(Mahasiswa m);
void hitung_nilai_akhir(Mahasiswa &m);
string hitung_nilai_huruf( float nilai_akhir );

int main()
{
  Mahasiswa a;
  a.nama = "Jojo";
  a.NIM = "A018003";
  a.uts = 80;
  a.uas = 99;
  a.praktikum = 78;
  
  hitung_nilai_akhir(a);

  info_mahasiswa(a);

  // using initializer list
  Mahasiswa b;
  b = {"Johann", "A018004", 81, 70, 65};

  hitung_nilai_akhir(b);
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
  cout << "---------------------------" << endl;
  cout << "Nilai akhir     : " << m.nilai_akhir;
  cout << " (" << hitung_nilai_huruf(m.nilai_akhir) << ")" << endl;
}


void hitung_nilai_akhir(Mahasiswa &m)
{
  m.nilai_akhir = 0.3*m.uts + 0.3*m.uas + 0.4*m.praktikum;
}

string hitung_nilai_huruf( float nilai_akhir )
{
  if( nilai_akhir <= 50.0 ) {
    return "E";
  }
  else if( nilai_akhir <= 60.0 ) {
    return "C";
  }
  else if( nilai_akhir <= 70 ) {
    return "BC";
  }
  else if( nilai_akhir <= 80 ) {
    return "B";
  }
  else if( nilai_akhir <= 90 ) {
    return "AB";
  }
  else if( nilai_akhir <= 100 ) {
    return "A";
  }
  else {
    return "NotDefined";
  }
}
