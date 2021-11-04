/* File: tabel1.c */
/* Penulis: Ivan, email ivantendou@gmail.com */
/* Deskripsi: */
/* Mendefinisikan array dan mengisi nilainya */
#include <stdio.h>
int main ()
{
    /* Kamus */
    int Tab [5] = {1, 2, 3, 4, 5}; /* Tab [0]=1; Tab [1]=2 */
    float TabX [3] = {1.5, 2.5E2, 9.99};
    char Tabchar [4] = {'1', '2', '@', 'Z'};
    
    int i; /* untuk iterasi indeks tabel; */
    /* menuliskan isi Tab berderet ke kanan */
    for (i=0; i<5; i++) {
        printf ("Tab[%d]= %d ;", i, Tab [i]);
        /* = %d karena Tab tipe datanya integer */
        /* i, Tab [i] */
        /* 2, Tab [1] */
        /* i merupakan value dari Tab [i], misal Tab [1] = 2; */
    }
    printf ("\n");

    for (i=0; i<3; i++) {
        printf ("TabX[%d]= %g ;", i, TabX [i]);
        /* perbedaan pada %g agar nilai dengan tipe data float (pendek) yang akan ditampilkan */
    }
    printf ("\n");
    
    for (i=0; i<4; i++) {
        printf ("Tabchar[%d]= %c ;", i, Tabchar [i]);
        /* %c untuk nilai dengan tipe data character */
    }
}
