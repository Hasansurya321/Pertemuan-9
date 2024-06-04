/*
Nama    		: Hasan Suryadharma
NIM     		: 24060123140208
Nama Program 	: Countsort.c
Deskripsi 		: Mengurutkan tabel integer terurut mengecil dengan maksimum

*/

#include<stdio.h>
#include <stdlib.h>

void MAXSORT (int T[], int N) {
    int i, Pass, Temp, IMax;
    for (Pass = 0; Pass < N - 1; Pass++) {
        IMax = Pass;
        for (i = Pass + 1; i < N; i++) {
            if (T[IMax] < T[i]) {
                IMax = i;
            }
        }
        Temp = T[IMax];
        T[IMax] = T[Pass];
        T[Pass] = Temp;
    }
}

int main () {
    int T[] = {7, 1, 8, 5, 3, 0, 6};
    int i;
    int N = 7;

    printf ("Tabel T sebelum dilakukan Selection Sort :\n");
    for (i = 0; i < N; i ++) {
        printf ("%d ", T[i]);
    }
    printf ("\n");
    printf ("Tabel T setelah dilakukan Selection Sort :\n");
    MAXSORT (T, N);
    for (i = 0; i < N; i++) {
        printf ("%d ", T[i]);
    }
    printf ("\n");
    return 0;
}