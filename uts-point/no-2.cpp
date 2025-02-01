#include <iostream>
using namespace std;

int main() {
    int angka[10];
    bool adaSesuai = false;

    cout << "Masukkan 10 angka integer positif: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    cout << "Angka yang habis dibagi 3 dan 4, tapi tidak habis dibagi 5:" << endl;
    for (int i = 0; i < 10; i++) {
        if (angka[i] % 3 == 0 && angka[i] % 4 == 0 && angka[i] % 5 != 0) {
            cout << angka[i] << " ";
            adaSesuai = true;
        }
    }
    if ( !adaSesuai)
    {
     cout << "tidak ada yg sesuai";   
    }

    cout << endl;
    return 0;
}
