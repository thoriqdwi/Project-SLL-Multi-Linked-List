#include "flight.h"

void createListJadwal_1301210556(ListJadwal &L)
{
    first(L) = nil;
}

adr_jadwalP createElemenJadwal_1301210556(infotype X)
{
    adr_jadwalP p;

    p = new elemenJadwal;
    info(p) = X;
    next(p) = nil;

    return p;
}

void insertLastJ_1301210556(ListJadwal &L, adr_jadwalP P)
{
    if (first(L) != nil) {
        adr_jadwalP last;

        last = first(L);
        while (next(last) != nil) {
            last = next(last);
        }

        next(last) = P;
    } else {
        first(L) = P;
    }
}

void ShowJadwal_1301210556(ListJadwal L)
{
    if (first(L) != nil) {
        adr_jadwalP p;
        int i;

        i = 1;
        p = first(L);
        cout << "Jadwal Penerbangan:" << endl;
        while (p != nil) {
            cout << "Penerbangan-" << i << " : " << info(p).Kode << " " << info(p).Jenis << " " << info(p).Tanggal << " " << info(p).Waktu << " " << info(p).Asal << "-" << info(p).Tujuan << " Berkapasitas " << info(p).Kapasitas << " Penumpang" << endl;
            i++;
            p = next(p);
        }
    } else {
        cout << "List Kosong" << endl;
    }
    cout << endl;
}

void DeleteFirstJ_1301210556(ListJadwal &L, adr_jadwalP &P)
{
    P = first(L);
    if (next(first(L)) != nil) {
        first(L) = next(P);
        next(P) = nil;
        cout << "Jadwal penerbangan dihapus" << endl;
    } else if (first(L) != nil) {
        first(L) = nil;
        cout << "Jadwal penerbangan dihapus" << endl;
    } else {
        P = nil;
        cout << "List Kosong" << endl;
    }
    cout << endl;
}

adr_jadwalP SearchJ_1301210556(ListJadwal L, string dari, string ke, string tanggal)
{
    adr_jadwalP J;


    if (first(L) != nil) {
        bool found;

        J = first(L);
        found = false;
        while (!found && J != nil) {
            if (info(J).Asal == dari && info(J).Tujuan == ke && info(J).Tanggal == tanggal) {
                found = true;
            } else {
                J = next(J);
            }
        }
        if (found) {
            cout << "Jadwal Penerbangan Ditemukan" << endl;
        } else {
            cout << "Jadwal Penerbangan Tidak Dapat Ditemukan" << endl;
        }
    } else {
        J = nil;
        cout << "List Kosong" << endl;
    }

    cout << endl;

    return J;
}
