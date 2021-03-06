#include <iostream>
#include <string>

using namespace std;

typedef struct
{
  string nama;
  string NIM;
  float uts;
  float uas;
  float praktikum;
  float nilai_akhir;
} Mahasiswa;

void input_data( int NDATA, Mahasiswa *daftar_mhs );

void tampilkan_data( Mahasiswa m );

void hitung_nilai_akhir( Mahasiswa &m );

string hitung_nilai_huruf( float nilai_akhir );

int main()
{
  int NDATA;

  cout << "Masukkan jumlah data: ";
  cin >> NDATA;

  Mahasiswa *daftar_mhs;

  daftar_mhs = new Mahasiswa[NDATA];

  input_data( NDATA, daftar_mhs );

  for(int i = 0; i < NDATA; i++) {
    hitung_nilai_akhir(daftar_mhs[i]);
    tampilkan_data(daftar_mhs[i]);
  }

  delete[] daftar_mhs;

  return 0;

}

void input_data(
  int NDATA, Mahasiswa *daftar_mhs
)
{
  for(int i = 0; i < NDATA; i++) {
    cout << endl;
    cout << "---------------" << endl;
    cout << "Entri data:" << i+1 << endl;
    cout << "---------------" << endl;
    cout << "Masukkan data" << endl;
    
    cout << "Nama: ";
    cin >> daftar_mhs[i].nama;
    
    cout << "NIM: ";
    cin >> daftar_mhs[i].NIM;

    cout << "Nilai UTS: ";
    cin >> daftar_mhs[i].uts;

    cout << "Nilai UAS: ";
    cin >> daftar_mhs[i].uas;
    
    cout << "Nilai praktikum: ";
    cin >> daftar_mhs[i].praktikum;
  }
}

void tampilkan_data( Mahasiswa m )
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

void hitung_nilai_akhir( Mahasiswa &m )
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

