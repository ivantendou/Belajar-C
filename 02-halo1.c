/* File : halo1.c */
/* Penulis : Ivan, email ivantendou@gmail.com */
/* Program untuk menuliskan Halo Dunia! ke layar */
/* <stdio.h> adalah library standar untuk baca tulis */
#include <stdio.h>
int
main ()
{
  /* KAMUS */
  /* void main dan int main */
  /* void main() {...} adalah salah. Stop untuk mendeklarasikan main dengan cara ini. Kecuali kode kamu dijalankan pada freestanding environment (lingkungan yang berdiri bebas) */
  /* main () {...} bisa diterima dalam C89, yang mana tidak dispesifikasi alias udah default kepada int. Namun, ini tidak bisa lagi dalam C99. */
  /* int main () {...} adalah cara terbaik untuk menulis main */
  /* ALGORITMA */
  printf ("Halo Dunia!\n");

  return 0;
}
/* return 0 menyatakan program ini mengirimkan atau mengembalikan ke Anda (return) sebuah nilai 0 jika semua baik-baik saja */
/* kalalu program mengembalikan nilai selain 0, boleh jadi ada error */
