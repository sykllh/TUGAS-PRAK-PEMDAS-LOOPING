#include <iostream>
using namespace std;

//deklarasi variabel global
int n;
int pilihan;
bool hasil;

//fungsi cek bilangan prima
bool cekPrima(int x){
    if (x <=1) return false;

    int i = 2;
    while (i < x) {
        if (x % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

//fungsi cek bonacci
bool cekFibonacci(int x){
    int a = 0,b = 1,c;

    while(a<=x){
        if(a==x){
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
        return false;
}

//prosedur input angka
void input(){
    
}
