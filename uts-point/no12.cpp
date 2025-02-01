#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    cin >> c;

    x = (a * a * a) + (b * b) + c;

    cout << "Hasilnya adalah: " << x;
}
