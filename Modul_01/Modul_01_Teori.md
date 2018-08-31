% Modul 01
% Fadjar Fathurrahman
% 2018

Tipe data, variabel, dan operasi dasar

# Tujuan

- Dapat membuat project C/C++ sederhana dengan menggunakan CodeBlocks

- Dapat membuat kode sumber C/C++ dengan menggunakan CodeBlocks
  atau editor teks lain

- Dapat melakukan proses build project C/C++ pada CodeBlocks

- Mengenal baris perintah (*command line* pada Linux)
  serta beberapa perintah sederhana

- Dapat melakukan kompilasi program dengan menggunakan baris perintah
  pada Linux

- Mengenal beberapa kesalahan umum pada pembuatan program serta
  solusinya


# Perangkat lunak yang diperlukan

- Linux OS
- CodeBlocks yang telah dikonfigurasi untuk kompiler GNU C/C++
- Terminal emulator dengan *bash* sebagai shell (baris perintah)
- Editor teks

# Teori Singkat



# Praktikum

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

Persamaan: $\alpha = \beta + \gamma$

Display style (need space before `$$`)

$$
\dfrac{\alpha}{\beta + 2} = \int \dfrac{\Gamma}{\dfrac{\zeta+1}{\alpha} + 1}
$$

## Program `Hello World` dengan C dan C++

New -> Project -> Empty Project

Project Title: Hello01

Folder to create project in: /home/students/Modul01_Jaka_Sembung/

Project filename: Hello01.cbp

Resulting filename: /home/students/Modul01_Jaka_Sembung/Hello01/Hello01.cbp

Next

Compiler GCC, check semua, jangan ubah konfigurasi

Finish

New file

Build and Run (F9)


Buat project kosong pada CodeBlocks dengan nama `Hello01`, kemudian tambahkan file
bernama `Hello01.cpp` dengan isi berikut:

```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World" << endl;
  return 0;
}
```

### Lupa memberikan tanda ; pada akhir statement

Kode sumber

```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World" << endl
  return 0;
}
```

Tuliskan pesan kesalahan (jika) yang tampil pada Build Log dan berikan penjelasannya

### Mengganti << dengan <

Kode sumber

```c++
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World" << endl
  return 0;
}
```

Tuliskan pesan kesalahan (jika ada) yang tampil pada Build Log
serta berikan berikan penjelasan dan/atau komentar Anda.

**XXXXXXXXX**

**XXXXXXXXX**


### Lupa #include <iostream>

Kode sumber

```c++
using namespace std;

int main()
{
  cout << "Hello World" << endl
  return 0;
}
```

**Tuliskan pesan kesalahan (jika ada) yang tampil pada Build Log**
**serta berikan berikan penjelasan dan/atau komentar Anda.**



### Lupa using namespace std

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

Boleh di baca

1. (https://www.codeproject.com/Questions/693038/why-do-we-have-to-use-return)

2. http://www.cplusplus.com/forum/beginner/24461/



## Menggunakan baris perintah

```
g++ Hello01.cpp
```


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

**END OF MODULE 1**
