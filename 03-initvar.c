/* File : initvar.c */
/* Penulis : Ivan, email ivantendou@gmail.com */
/* Mengisi variabel i yang bertype int dengan nilai 5 dan menuliskannya */
/* <stdio.h> adalah library standar untuk baca tulis */
#include <stdio.h>

int main ()
{ /* Kamus */
  int i = 5; /* deklarasi dan inisialisasi nilai variabel i dengan 5 */
  int j = 7;
  int k = 1;
  float luas = 2.5;
  float keliling = 2 * 3.14 * 5.5;
  int bebek = 10;
  /* Algoritma */
  printf ("Ini nilai i : %d \n", i); /*untuk mengamati dampak inisialisasi */
  printf ("Ini nilai j : %d \n", j);
  printf ("Ini nilai k : %d \n", k);
  printf ("Ini nilai luas : %f \n", luas);
  printf ("Ini nilai keliling : %f \n", keliling);
  printf ("Ini nilai bebek : %d \n", bebek);
  return 0;
}
