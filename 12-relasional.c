/* File : relasional.c */
/* Penulis : Ivan, email ivantendou@gmail.com */
/* Deskripsi : */
/* Contoh perbandingan nilai numerik */
#include <stdio.h>
int main ()
{
	/* Kamus */
	int X = 5;
	int Y = 8;
	/* Program */
	printf ("Hasil X < Y : %d \n", X < Y);
	printf ("Hasil X > Y : %d \n", X > Y);
	printf ("Hasil X <= Y : %d \n", X <= Y);
	printf ("Hasil X >= Y : %d \n", X >= Y);
	printf ("Hasil X == Y : %d \n", X == Y); /* Operator kesamaan : == */
	printf ("Hasil X != Y : %d \n", X != Y); /* Operator ke-tidak-samaan : != */
	
	printf ("Hasil X == X : %d \n", X == X); /* Operator kesamaan : == */
	printf ("Hasil X != X : %d \n", X != X); /* Operator ke-tidak-samaan : != */
	
	return 0;
}
