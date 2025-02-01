#include <iostream>
#include <string>

using namespace std;

int main() {
    string orang1[3], orang2[3];
    bool sama = true;
    
    // Input hasil pertandingan untuk orang pertama
    cout << "Orang pertama:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Menang pada pertandingan ke-" << i+1 << " (y/n): ";
        cin >> orang1[i];
    }

    // Input hasil pertandingan untuk orang kedua
    cout << "\nOrang kedua:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Menang pada pertandingan ke-" << i+1 << " (y/n): ";
        cin >> orang2[i];
    }

    // Membandingkan hasil pertandingan orang pertama dan orang kedua
    for (int i = 0; i < 3; i++) {
        if ((orang1[i] == "y" && orang2[i] != "y") || (orang1[i] != "y" && orang2[i] == "y")) {
            sama = false;
        }
    }

    if (sama) {
        cout << "\nKedua orang tersebut mempunyai poin yang sama." << endl;
    } else {
        cout << "\nKedua orang tersebut mempunyai poin yang berbeda." << endl;
    }

    return 0;
}
