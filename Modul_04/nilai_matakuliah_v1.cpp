#include <iostream>
#include <string>

using namespace std;

void input_data(
  int NDATA,
  string *nama, string *NIM, float *uts, float *uas, float *praktikum
);


void tampilkan_data(
  int idata,
  string *nama, string *NIM, float *uts, float *uas, float *praktikum,
  float *nilai_akhir
);

void hitung_nilai_akhir(
  int Ndata,
  float *uts, float *uas, float *praktikum,
  float *nilai_akhir
);

string hitung_nilai_huruf( float nilai_akhir );

int main()
{
  const int NDATA = 3;
  
  string nama[NDATA];
  string NIM[NDATA];
  float uts[NDATA], uas[NDATA], praktikum[NDATA];
  float nilai_akhir[NDATA];

  input_data( NDATA, nama, NIM, uts, uas, praktikum );

  hitung_nilai_akhir( NDATA, uts, uas, praktikum, nilai_akhir );

  for(int i = 0; i < NDATA; i++) {
    tampilkan_data( i, nama, NIM, uts, uas, praktikum, nilai_akhir );
  }

  return 0;

}

void input_data(
  int NDATA,
  string *nama, string *NIM, float *uts, float *uas, float *praktikum
)
{
  for(int i = 0; i < NDATA; i++) {
    cout << endl;
    cout << "---------------" << endl;
    cout << "Entri data:" << i+1 << endl;
    cout << "---------------" << endl;
    cout << "Masukkan data" << endl;
    
    cout << "Nama: ";
    cin >> nama[i];
    
    cout << "NIM: ";
    cin >> NIM[i];

    cout << "Nilai UTS: ";
    cin >> uts[i];

    cout << "Nilai UAS: ";
    cin >> uas[i];
    
    cout << "Nilai praktikum: ";
    cin >> praktikum[i];
  }
}

void tampilkan_data(
  int i,
  string *nama, string *NIM, float *uts, float *uas, float *praktikum,
  float *nilai_akhir
)
{
  cout << endl;
  cout << "--------------------" << endl;
  cout << "Tampilan data: " << i+1 << endl;
  cout << "--------------------" << endl;
  cout << "Nama            : " << nama[i] << endl;
  cout << "NIM             : " << NIM[i] << endl;
  cout << "Nilai UTS       : " << uts[i] << endl;
  cout << "Nilai UAS       : " << uas[i] << endl;
  cout << "Nilai praktikum : " << praktikum[i] << endl;
  cout << "------------------" << endl;
  cout << "Nilai akhir     : " << nilai_akhir[i];
  cout << " (" << hitung_nilai_huruf(nilai_akhir[i]) << ")" << endl;
}

void hitung_nilai_akhir(
  int Ndata,
  float *uts, float *uas, float *praktikum,
  float *nilai_akhir
)
{
  for(int i = 0; i < Ndata; i++) {
    nilai_akhir[i] = 0.3*uts[i] + 0.3*uas[i] + 0.4*praktikum[i];
  }
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

