/* File : assignKar.c */
/* Penulis : Ivan, email ivantendou@gmail.com */
/* Deskripsi : Program ini berisi contoh sederhana untuk mendefinisikan */
/* variabel bertipe karakter */
#include <stdio.h>
int main ()
{
    /* Kamus */
    char c = 65; /* inisialisasi nilai karakter dengan 65, koder huruf 'A' */
    char c1;
    /* Algoritma */
    /* Penulisan karakter sebagai huruf */
    printf ("Karakter = %c\n", c);
    c1 = 'Z'; /* variabel c1 diisi dengan huruf 'Z' */
    printf ("Karakter = %c\n", c1);
    
    /* penulisan karakter */
    printf ("Karakter dalam kode ASCII = %d\n", c);
    printf ("Karakter sebagai huruf = %c\n", c);
    printf ("Karakter dalam kode ASCII = %d\n", c1);
    printf ("Karakter sebagai huruf = %c\n", c1);
    
    return 0;
}