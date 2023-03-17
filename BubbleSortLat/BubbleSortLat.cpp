#include <iostream>
using namespace std;


int a[20];              // Deklarasi array a dengan ukuran 20
int n;                  // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {           // Prosedur untuk input
    while (true) {       // looping
        cout << "Masukan banyaknya elemen pada array : ";                   // output ke layar
        cin >> n;            // input dari pengguna
            if (n <= 20)     // jika n kurang dari atau sama dengan 20
                break;       // keluar dari loop
            else {           // jika n lebih dari 20
                cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    // output ke layar
            }
    }
    cout << endl;                           //output baris kosong
    cout << "====================" << endl; //output ke layar
    cout << "Masukan Elemen Array" << endl; //output ke layar
    cout << "====================" << endl; //output ke layar

    for (int i = 0; i < n; i++) {               // looping dengan i dimulai deari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";  // output ke layar
        cin >> a[i];                            // input dari pengguna
    }
}

void display() {        // Procedure untuk menampilkan hasil
    cout << endl;                                           // Output baris kosong
    cout << "=================================" << endl;    // Output ke layar
    cout << "Element Array yang telah tersusun" << endl;    // Output ke layar
    cout << "=================================" << endl;    // Output ke layar
    for (int j = 0; j < n; j++) {               // Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                   // Output ke layar
    }
    cout << endl;                               // Output baris kosong
}   









int main()
{
    std::cout << "Hello World!\n";
}
