/* File : assingi.c */
/* Penulis : Ivan, email ivantendou@gmail.com */
/* Mengisi variabel i yang bertype int dengan nilai 5 dan menuliskannya */
#include <stdio.h>

int main ()
{ /* Kamus */
    int i;
    /* Simbol "=" dipakai sebagai sarana untuk mengisikan nilai ke variabel
    di ruas sebelah kiri. Bukan berarti "sama dengan", tetapi "diisikan nilainya
    ke .." */
    
    /* Algoritma */
    i = 6; /* sekarang variabel i akan bernilai 5 */
    printf ("Ini nilai i : %d \n", i);
    
    i = i+1; /* nilai i ditambah 1, hasilnya disimpan kembali di i */
    printf ("Ini nilai i : %d \n", i);
    
    return 0;
}
