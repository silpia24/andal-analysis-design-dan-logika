#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    // nurul silpia
    // n = nama
    // p = nip
    // u = tahun masuk
    // a = jabatan
    // nur = gaji pokok
    // s = status karyawan
    // sa = status menikah / belum
    // sil = tunjangan istri
    // pia = tunjangan anak
    // nsa = jumlah anak
    // np = tunjangan tetap
    // na = tunjangan trasnportasi
    // ns = masa kerja
    // nr = current year
    // silpiw = total gaji
    // slp = pph
    // nurul = gaji bersih
    // nis = nim
    // slpa = hitung

    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    string n, slpa, nis;
    int p, s, a, u, ns, sa, nsa, nr, nur, sil, pia, np, na, silpiw, slp, nurul;

    cout << "Input nama pegawai: ";
    // cin >> n;
    getline(cin >> ws, n);
    cout << "Input NIP: ";
    cin >> p;
    cout << "Input tahun masuk: ";
    cin >> u;

    nr = datetime.tm_year + 1900;
    ns = nr - u;
    cout << "Lama masa kerja: " << ns << " tahun\n";

    cout << "\n 1. Staff \n 2. Manajer \n 3. Direktur \nPilih jabatan: ";
    cin >> a;

    cout << "\n\n 1. Tetap \n 2. Honorer \nPilih status karyawan: ";
    cin >> s;

    cout << "\n\n 1. Menikah \n 2. Belum Menikah \nPilih status pernikahan: ";
    cin >> sa;

    switch (sa)
    {
    case 1:
        cout << "Input jumlah anak: ";
        cin >> nsa;
        break;
    case 2:
        cout << "Status pernikahan: Belum Menikah\n";
        break;
    default:
        break;
    }

    cout << "Proses gaji karyawan: " << n << " (y/t) ";
    cin >> slpa;

    // proses hitung
    if (slpa == "y")
    {
        cout << "======================================= \n";
        // print gapok
        if (a == 3)
        {
            nur = 7000000;
            cout << "Gaji Pokok: " << nur << "\n";
        }
        else if (a == 2)
        {
            nur = 3500000;
            cout << "Gaji Pokok: " << nur << "\n";
        }
        else if (a == 1)
        {
            nur = 1500000;
            cout << "Gaji Pokok: " << nur << "\n";
        }
        else
        {
            nur = 1000000;
            cout << "Gaji Pokok: " << nur << "\n";
        }

        // tunjangan tetap dan tunjangan trasnport
        if (s == 1)
        {
            np = 2 * nur;
            cout << "Tunjangan Tetap: " << np << "\n";
            na = 0;
        }
        else
        {
            np = 0;
            na = 25 * 15000;
            cout << "Tunjangan Transport: " << na << "\n";
        }

        // tunjangan istri
        if (sa == 1)
        {
            sil = 5000000;
            cout << "Tunjangan Istri: " << sil << "\n";
        }
        else
        {
            sil = 0;
        }

        // tunjangan anak
        if (nsa <= 3)
        {
            pia = nsa * 200000;
            cout << "Tunjangan Anak: " << pia << "\n";
        }
        else
        {
            pia = 0;
        }

        cout << "======================================= \n";
        silpiw = nur + np + na + sil + pia;
        cout << "Total Gaji: " << silpiw;

        slp = (nur * 5) / 100;
        cout << "\nPPH: " << slp;

        nurul = silpiw - slp;
        cout << "\nGaji bersih: " << nurul;
        cout << "\n\n=======================================\n";
        cout << "Programmer: ";
        cout << "\nNIM: ";
        cin >> nis;
        if (nis == "2412510030")
        {
            cout << "NAMA: NURUL SILPIA";
        }
        else
        {
            cout << "THATS NOT SILPIA, WHO ARE YOU?";
        }
    }

    else
    {
        exit(0);
    }

    return 0;
}