#include "flight.h"

int main()
{
    ListJadwal L;
    adr_jadwalP P;
    infotype jadwalP;
    int n;

    createListJadwal_1301210556(L);
    cout << "Banyak jadwal penerbangan yang akan di input: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Input ke-" << i << endl;
        cout << "Masukan kode penerbangan: ";
        cin >> jadwalP.Kode;
        cout << "Masukan jenis penerbangan: ";
        cin >> jadwalP.Jenis;
        cout << "Masukan tanggal penerbangan (dd-mm-yyyy): ";
        cin >> jadwalP.Tanggal;
        cout << "Masukan waktu penerbangan (jj:mm): ";
        cin >> jadwalP.Waktu;
        cout << "Masukan asal penerbangan: ";
        cin >> jadwalP.Asal;
        cout << "Masukan tujuan penerbangan: ";
        cin >> jadwalP.Tujuan;
        cout << "Masukan kapasitas penerbangan: ";
        cin >> jadwalP.Kapasitas;
        cout << endl;

        P = createElemenJadwal_1301210556(jadwalP);
        insertLastJ_1301210556(L, P);
    }

    ShowJadwal_1301210556(L);

    DeleteFirstJ_1301210556(L, P);

    ShowJadwal_1301210556(L);

    P = SearchJ_1301210556(L, "Surabaya", "Malang", "09-12-2022");

    return 0;
}

