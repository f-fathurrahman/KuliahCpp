#include <iostream>
#include <string>

using namespace std;

void input_data(
  int NDATA,
  string *nama, string *NIM, float *uts, float *uas, float *praktikum
);


void tampilkan_data(
  int idata,
  string *nama, string *NIM, float *uts, float *uas, float *praktikum
);


float hitung_rata2( int Ndata, float *data );

float hitung_nilai_akhir( float uts, float uas, float praktikum );

int main()
{
  const int NDATA = 3;
  
  string nama[NDATA];
  string NIM[NDATA];
  float uts[NDATA], uas[NDATA], praktikum[NDATA];

  input_data( NDATA, nama, NIM, uts, uas, praktikum );

  for(int i = 0; i < NDATA; i++) {
    tampilkan_data( i, nama, NIM, uts, uas, praktikum );
  }

  cout << endl;
  cout << "Rata-rata nilai UTS       = " << hitung_rata2( NDATA, uts ) << endl;
  cout << "Rata-rata nilai UAS       = " << hitung_rata2( NDATA, uas ) << endl;
  cout << "Rata-rata nilai praktikum = " << hitung_rata2( NDATA, praktikum ) << endl;

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
  string *nama, string *NIM, float *uts, float *uas, float *praktikum
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
}

float hitung_rata2( int Ndata, float *data )
{
  float ssum = 0.0;
  for(int i = 0; i < Ndata; i++) {
    ssum = ssum + data[i];
  }
  return ssum/Ndata;
}

float hitung_nilai_akhir( float uts, float uas, float praktikum )
{
  return 0.3*uts + 0.3*uas + 0.4*praktikum;
}
