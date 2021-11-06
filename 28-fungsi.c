/* File: fadd.c */
/* Penulis: Ivan, email ivantendou@gmail.com */
/* Deskripsi: */
/* Fungsi yang menjumlahkan a+b */
#include <stdio.h>

/*
<type-kembalian> Nama-fungsi (list parameter dipisahkan tanda koma) {
 //Spesifikasi: penjelasan ringkas tentang apa yang dilakukan fungsi
 
    return <nilai>;
}
*/

int add (int a, int b) {
    /* fungsi bernama add yang menerima dua integer yaitu a dan b */
    /* dan mengirimkan hasil penjumlahan a+b */
    return (a+b);
}

int inkremen (int a) {
    /* mengirimkan nilai a yang sudah ditambah dengan 1; 
    perhatikakn bahwa nilai a TIDAK DIUBAH */
    return (a+1);
}
/***************************/
int main () {
    int x = 10;
    int y = 25;
    /* pemakaian/pemanggilan fungsi add */
    printf ("Hasil penjumlahan x+y = %d\n", add (x,y));
    printf ("Hasil penjumlahan 3+2 = %d\n", add (3,2));
    
    /* pemakaian/pemanggilan fungsi inkremen */
    printf ("nilai x : %d\n", x);
    printf ("nilai x setelah ditambah 1 : %d\n", inkremen (x));
    printf ("nilai 5 setelah ditambah 1 : %d\n", inkremen (5));
    
    return 0;
}
