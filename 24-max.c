/* File: max.c */
/* Penulis: Ivan, email ivantendou@gmail.com */
/* Deskripsi: */
/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer */
#include <stdio.h>
int main () 
{
    /* Kamus */
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8, 99, 100};
    int max;
    /* Algoritma */
    /* Menentukan Tab[0] sebagai nilai maksimum sementara yang
    diberi nama max! */
    max = Tab[0];
    
    /* Untuk setiap elemen Tab[1] s.d. Tab[9] yang diakses dengan 
    nama Tab[i] */
    for (i=1; i<10; i++) {
        
        /* Jika nilai Tab[i] > max, maka max=Tab[i] */
        if (Tab[i]>max) {
            
            /* selesai pemeriksaan Tab[1] s.d. Tab[9]: max adalah
            nilai paling besar */
            max=Tab[i];
        }
    }
    printf ("Nilai Max= %d", max); return 0;
}
