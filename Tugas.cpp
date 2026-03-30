#include <iostream>
using namespace std;

// variabel global
int angka;
int pilih;

// cek prima
bool cekPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// cek fibonacci
bool cekFibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// prosedur input
void input() {
    cout << "Masukkan angka : ";
    cin >> angka;
}

// prosedur output prima
void outputPrima() {
    if (cekPrima(angka)) {
        cout << "Bilangan prima\n";
    } else {
        cout << "Bukan bilangan prima\n";
    }
}

// prosedur output fibonacci
void outputFibo() {
    if (cekFibonacci(angka)) {
        cout << "Termasuk Fibonacci\n";
    } else {
        cout << "Bukan Fibonacci\n";
    }
}

// menu
void menu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Cek Prima\n";
    cout << "2. Cek Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih : ";
}

int main() {

    while (true) {
        menu();
        cin >> pilih;

        switch (pilih) {
            case 1:
                input();
                outputPrima();
                break;

            case 2:
                input();
                outputFibo();
                break;

            case 0:
                cout << "Program selesai\n";
                return 0;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}