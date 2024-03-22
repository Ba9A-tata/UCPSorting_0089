// Jawaban
// No 1. Bubble Sort adalah proses algoritma yang membandingkan anatar elemen yang berseblahan, jika elemen sebelah kiri lebih besar dari yang kanan maka akan jadi pertukaran tempat(SWAP),Namun jika sudah tepat maka akan lanjut ke step selanjutnya (Pass)
// No 2.
// Jika kita akan menggunakan algortima shell sort hal pertama yang kita harus lakukan adalah memilih 1 elemen dan lewat 1 elemen.
// Contoh : 0 dengan 2 1 dengan 3 4 dengan 6 dan seterusnya, lalu kita akan membuat sublist dan setelah itu kita akan menempatkan elmen elemen tersebut ke sublistnya
//  
// No 3.Kita harus memilih algoritma shell sort dikarenakan didalam algoritma ini biasanya ada beberapa data yang sudah berurutan, maka algoritma ini sangat cocok digunakan untuk pengelolaan data dan juga efisiensi waktu pengerjaan

#include <iostream>
#include <string>
using namespace std;

int arr[89] // Deklarasi variabel global array a dengan ukuran 89
int n; // Deklarasi variabel global n untuk menyimpan banyak elemen array

void input() { // Prosedur untuk input
    cout << "Masukan banyaknya elemen pada array : "; // output ke layar
    cin >> n; // input dari pengguna
    if (n <= 89) // jika n kurang dari atau sama dengan 89
