/* File: seqsearch.c */
/* Penulis: Ivan, email ivantendou@gmail.com */
/* Deskripsi: */
/* Menentukan posisi di mana elemen tabel bernilai X */
#include <stdio.h>
int main ()
{
    /* Kamus */
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int X=8; /* indeks di mana Tab[max] bernilai maksimum */
    
    /* Algoritma sequential search paling sederhana */
    /* Program berhenti pada indeks I di mana nilai diketemukan */
    i = 0;
    // cek kalo Tab[1] bukan X dan i < 9 ulang lagi, kalo engga lanjut ke if karena program while udah ancur
    while ( (Tab[i] != X) && (i < 9) ) {
        i++;
    } 
    if (Tab[i] == X) {
        printf ("Indeks bernilai X = %d",i);
    } else {
        printf ("Nilai tidak diketemukan");
    }
    return 0;
}
