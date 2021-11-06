/* File: maxModifikasi.c */
/* Penulis: Ivan, email ivantendou@gmail.com */
/* Deskripsi: */
/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer */
#include <stdio.h>
int main () 
{
    /* Kamus */
    int i, min, max, median;
    int Tab[10] = {1, 50, 6, 200, 200, 200, 30, 8, 99, 100};
    int jumlahMax = 1;
    
    float nilaiRataRata;
    float nilaiTotal = 0;
    int n = 10;
    /* Algoritma */
    /* Menentukan Tab[0] sebagai nilai maksimum sementara yang
    diberi nama max! */
    min = Tab[0];
    
    /* Untuk setiap elemen Tab[1] s.d. Tab[9] yang diakses dengan 
    nama Tab[i] */
    for (i=1; i<10; i++) {
        
        /* Jika nilai Tab[i] > max, maka max=Tab[i] */
        if (Tab[i]<min) {
            
            /* selesai pemeriksaan Tab[1] s.d. Tab[9]: max adalah
            nilai paling besar */
            min=Tab[i];
        }
    }
    // printf nilai minimum (min)
    printf ("Nilai Min= %d \n", min);
    
    max=Tab[0];
    
    for (i=1; i<10; i++) {
        if (Tab[i]>max) {
            max = Tab[i];
        }
        
        // mengetahui jumlah nilai max yang sama
        else if (Tab[i] == max) {
            jumlahMax++;
        }
    }
    // looping untuk mengetahui nilaiTotal
    for (i=0; i<n; i++) {
        nilaiTotal = nilaiTotal + Tab[i];
    }
    // printf nilai terbesar (max)
    printf ("Nilai Max= %d \n", max);
    // printf jumlah nilai max yang sama
    printf ("Jumlah nilai max= %d \n", jumlahMax);
    
    // mengetahui median Tabel
    median = (min+max)/2;
    printf ("Median dari isi tabel adalah= %d \n", median);
    // mengetahui nilai rata rata isi tabel
    nilaiRataRata = nilaiTotal/n;
    printf ("Nilai rata-rata dari isi tabel adalah= %g", nilaiRataRata);
    
}
