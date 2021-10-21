/* File : assignf.c */
/* Penulis : Ivan, email ivantendou@gmail.com */
/* Mengisi variabel i yang bertiper int dengan nilai 5 dan menuliskannya */
#include <stdio.h>

int main ()
{ /* Kamus */
   float f = 0.555;
   float x = 1.5E3;
   /* Algoritma */
   printf ("Ini nilai f : %f \n", f);
   printf ("Ini nilai f : %5.2f \n", f); /* output nilai f lebih menjorok ke kanan */
   printf ("Ini nilai x : %10.2f \n", f);
return 0;
}
