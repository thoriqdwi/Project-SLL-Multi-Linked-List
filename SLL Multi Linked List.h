#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) ((L).First)
#define info(L) L->info
#define next(L) L->next
#define nil NULL

struct jadwalPenerbangan
{
  string Kode, Jenis, Tanggal, Waktu, Asal, Tujuan;
  int Kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;

typedef jadwalPenerbangan infotype;

struct elemenJadwal
{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal
{
  adr_jadwalP First;
};

void createListJadwal_1301210556(ListJadwal &L);
adr_jadwalP createElemenJadwal_1301210556(infotype X);
void insertLastJ_1301210556(ListJadwal &L, adr_jadwalP P);
void ShowJadwal_1301210556(ListJadwal L);
void DeleteFirstJ_1301210556(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP SearchJ_1301210556(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
