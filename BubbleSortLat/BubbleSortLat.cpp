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

void bubbleSortArray() {                         // Prosedur untuk mengurutkan array deengan metode bubble sort
    for (int i = 1; i < n; i++) {                // Looping dengan i dimulai dari 0 hingga n-1
            for (int j = 0; j < n - i; j++) {    // Looping dengan j dimulai dari 0 hingga n-1
                if (a[j] > a[j + 1]) {           // Jika nilai pada a[j] lebih besar dari a[j+1]
                    int temp = a[j];             // Simpan nilai a[j] ke variable sementara temp
                    a[j] = a[j + 1];             // assign nilai a[j+1] ke a[j]
                    a[j + 1] = temp;             // assign nilai temp ke a[j+1]
                }
            }
    }
}


int main(){
    input();                //memanggil read()
    bubbleSortArray();      //memanggil bubbleSortArray
    display();              //memanggil display
    return 0;
}
