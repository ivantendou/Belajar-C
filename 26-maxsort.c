/* File: maxsort.c */
/* Penulis: Ivan, email ivantendou@gmail.com */
/* Deskripsi: */
/* Mengurutkan elemen tabel dengan metoda maksimum sort */
#include <stdio.h>
int main ()
{
    /* Kamus */
    int i;
    int Tab[10] = {1, 50, 6, 200, 3, 100, 30, 8,99, 100};
    int max; /* indek di mana Tab[max] bernilai maksimum */
    int k, temp; /* variabel kerja */
    
    /* Algoritma maximum sort menurun, indeks paling kecil berisi nilai paling besar */
  // i<9 karena logika for di dalamnya hanya akan menggunakan i < 9 = { (0,1),(1,2)(2,3)(3,4)(4,5)(5,6)(6,7)(7,8)(8,9),(9,10 }
    for (i=0; i<9; i++) {
        /* tentukan indeks mac, di mana Tab[max] bernilai maksimum */
        /* untuk indeks tabel i...10 */
        max = i;
        
        // pengulangan ini untuk membandingkan besar kecil nilai-nilai pada Tab
        for (k= i+1; k<10; k++) {
            if (Tab[k] > Tab[max]) {
                max = k;
            }
        }
      //swapping values of two variables
        temp = Tab[i];
        Tab[i] = Tab [max];
        Tab [max] = temp;
    }
    for (i=0; i<10; i++) {
        printf (" %d ; ", Tab [i]);
    }
    return 0;
}
