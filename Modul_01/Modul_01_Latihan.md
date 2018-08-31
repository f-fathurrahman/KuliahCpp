% Modul 01
% Tulis nama Anda di sini
% NIM

# Pentunjuk dasar

Buat direktori (folder) dengan format `Modul01_NIM_Nama`. Semua pekerjaan Anda
akan dilakukan dalam direktori ini.

**Jangan gunakan spasi jika nama Anda lebih dari satu kata**
**Gunakan underscore _ sebagai pengganti spasi**

Contoh:
```
Modul01_Jaka_Sembung (benar)

Modul01_Jaka Sembung (salah)
Modul01 Jaka Sembung (salah)
```

# Program `Hello World` dengan C++ menggunakan CodeBlocks

New -> Project -> Empty Project

**Project Title**: Hello01

**Folder to create project in**: /home/students/Modul01_Jaka_Sembung/

**Project filename**: Hello01.cbp

**Resulting filename**: /home/students/Modul01_Jaka_Sembung/Hello01/Hello01.cbp

Next

Compiler GCC, check semua, jangan ubah konfigurasi

Finish

New file



Build and Run (F9)


Buat project kosong pada CodeBlocks dengan nama `Hello01`, kemudian tambahkan file
bernama `Hello01.cpp` dengan isi berikut:

```c++
// Nama:
// NIM:

#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World" << endl;
  return 0;
}
```

Tugas

1. Perhatikan struktur direktori dari Hello01.


# Program `Hello World` dengan C++ menggunakan baris perintah

Buka Terminal.

Perhatikan demostrasi yang dilakukan di depan kelas.

Catat perintah-perintah yang telah didemonstrasikan.

-------------------------------------------------------------------------
                                           Output atau
Perintah                                   apa yang dilakukan
                                           oleh perintah tersebut
----------------------------------------   -------------------------------
`pwd`

`cd dirname`

`ls`

... dan seterusnya
-------------------------------------------------------------------------

Lengkapi langkah-langkah (dan perintah *shell*) berikut ini yang
diperlukan untuk menjalankan program `Hello01`

1. Cek direktori kerja awal ketika membuka terminal.
   Perintah yang diperlukan adalah ....
   Direktori kerja awal adalah ....

2. Tentukan lokasi file `.cpp` yang ingin dibangun (*build = compile + link*)
   Lokasi file tersebut adalah ....

3. Ubah direktori kerja ke direktori yang berisi file `.cpp` yang telah
   disebutkan sebelumnya.
   Direktori tersebut adalah ....
   Perintah yang diperlukan adalah ....

4. Pastikan bahwa perintah yang dilakukan pada langkah 3 sukses dan kita
   tidak melakukan kesalah dengan cara mengecek direktori kerja sekarang.
   Perintah yang diperukan adalah ....
   Direktori kerja sekarang adalah ....

5. Pastikan bahwa file `.cpp` tersebut ada pada direktori kerja.
   Hal ini dapat dilakukan dengan cara melihat daftar file dan subdirektori apa
   saja yang ada pada direktori saat ini.
   
   Perintah yang diperlukan adalah ....
   
   File-file yang ada pada direktori kerja adalah

   ....

6. Bangun (build) program dengan menggunakan perintah ....

7. Pastikan proses pada no.6 telah berhasil (tidak ada kesalahan atau pesan error).
   Cek apakah ada file baru yang dihasilkan.
   Jika ada file tersebut bernama ....

8. Eksekusi program yang dihasilkan pada terminal.

   Perintah yang diperlukan adalah ....

   Hasil/output dari eksekusi program

   ....
  











# Melakukan perhitungan arimetika sederhana

Buat project CodeBlocks baru dengan nama `Aritmatika01` dan tambahkan file
`.cpp` pada proyek tersebut dengan nama `aritmatika01.cpp`.

**Alternatif lain** Untuk Anda yang lebih senang bekerja dengan
terminal, buat direktori `Aritmatika01` dan file `aritmatika01.cpp`.

```c++
// Nama:
// NIM:
#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  a = 123;
  b = 456;

  c = a + b;
  cout << a << " + " << b << " = " << c << endl;

  return 0;
}
```

# Latihan A

Pada kerjakan latihan ini dengan menggunakan CodeBlocks atau baris perintah
pada terminal.

Untuk setiap percobaan, tuliskan pesan kesalahan (jika ada)
yang tampil pada Build Log
serta berikan berikan penjelasan dan/atau komentar Anda.

## A.1 Lupa memberikan tanda ; pada akhir statement

Terdapat tiga tanda `;` coba hilangkan satu saja dan amati apa yang terjadi.
Misalnya pada program ini tanda `;` setelah `endl` dihapus.

```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World" << endl
  return 0;
}
```


## Mengganti << dengan <

Kode sumber

```c++
#include <iostream>
using namespace std;

int main()
{
  cout < "Hello World" < endl
  return 0;
}
```

## Lupa menggunakan #include <iostream>

Kode sumber

```c++
using namespace std;

int main()
{
  cout << "Hello World" << endl
  return 0;
}
```



## Lupa menggunakan using namespace std

Kode sumber:

```c++
#include <iostream>

int main()
{
  cout << "Hello World" << endl
  return 0;
}
```

### Menggunakan std::

Kode sumber:

```c++
#include <iostream>

int main()
{
  std::cout << "Hello World" << std::endl
  return 0;
}
```


### Menghilangkan statement return 0

Kode sumber:

```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World" << endl;
}
```

Referensi berikut ini boleh dibaca:

1. (https://www.codeproject.com/Questions/693038/why-do-we-have-to-use-return)

2. http://www.cplusplus.com/forum/beginner/24461/



# Soal dan Tugas

1. Perbaiki kode berikut ini

Kode salah:

```c++
#include <iostream>

int main()
{
  int a = 21;
  int b = 34:
  int c = a*b;
  cout >> c >> endl;

  return 0;
}
```

Kode yang diperbaiki:

```c++
// Kode yang diperbaiki ...
```
