/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int main() {
  int nilai;

  // Memberikan informasi agar user memasukkan 
  // sebuah bilangan bulat
  cout<<"Masukkan sebuah bilangan bulat: "; 

  // Membaca nilai yang dimasukkan dari keyboard
  // dan disimpan ke variabel nilai
  cin>>nilai;

  // Menampilkan sebuah teks 
  // jika nilai yang tersimpan 
  // lebih besar dari nol
  if (nilai > 0) 
    cout<<"Nilai yang Anda masukkan "
        <<"adalah bilangan positif";
  else
    cout<<"Nilai yang Anda masukkan "
        <<"adalah bilangan Negatif";
  return 0;
}
