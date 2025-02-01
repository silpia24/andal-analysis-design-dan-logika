
#include <iostream>
using namespace std;
int main()
{
    int jumlah, satuan, harga, bayar, potongan;

    cout << "Input jumlah barang: ";
    cin >> jumlah;
    cout << "Input harga satuan: Rp ";
    cin >> satuan;

    harga = jumlah * satuan;
    if (harga > 1000000)
    {
        potongan  = harga * 0.1;
    }else if (harga > 501000 && harga <  1000000)
    {
        potongan = harga * 0.05;
    } else if (harga < 501000)
    {
        potongan = 0;
    }
    
    bayar = harga - potongan;

    cout << "============================"<<endl;
    cout << "Harga: " << harga << endl;
    cout << "Potongan: " << potongan << endl;
    cout << "Bayar: " << bayar << endl;
}