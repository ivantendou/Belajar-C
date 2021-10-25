/* File: bacaNum.c */
/* Penulis : Ivan, email ivantendou@gmail.com */
/* Deskripsi : */
/* contoh membaca nilai numerik: bilangan bulat, bilangan riil */
/* kemudian menuliskan nilai yang dibaca */
#include <stdio.h>
int main ()
{
    /* Kamus */
    int a;
    float x;
    /* Program */
    printf ("Contoh membaca dan menulis, ketik nilai integer: ");
    scanf ("%d", &a); /* membaca nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dg &a */
    // &a disebut address of a, atau data yang kita input diarahkan ke variabel a
    printf ("Nilai yang dibaca : %d \n", a);
    
    printf ("ketik nilai sebuah bilangan riil: ");
    scanf ("%f", &x); /* membaca nilai x yang bertype float */
    printf ("Nilai yang dibaca : %f \n", x);
    
    return 0;
}
