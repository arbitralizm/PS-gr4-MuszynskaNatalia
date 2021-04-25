#include <stdio.h>
#include <stdlib.h>

void zmien(short tab[], int n) {
    for (short *p = tab; p < tab + n; ++p) {
        if (*p % 2 != 0) {
            *p *= 2;
        }else {
            *p *= -1;
        }
    }
}

void signum(short tab[], int n) {
    for (short *p = tab; p < tab + n; ++p) {
        if (*p > 0) {
            *p = 1;
        }
        if (*p < 0) {
            *p = -1;
        }
    }
}

int zad2_1b() {
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > N) {
        printf("Liczba elementów musi byc z przedzialu [1, %d]!\n", N);
        return 1;
    }

    short lim = 999;
    srand(time(0));
    for (short *p = tab; p < tab + n; ++p) {
        *p = rand() % lim + 1;
    }

    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d ", *p);
    }

    printf("\nPo wywolaniu funkcji 'zmien':\n");
    zmien(tab, n);
    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d ", *p);
    }
    printf("\nPo wywolaniu funkcji 'signum':\n");
    signum(tab, n);
    printf("\n");
    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d ", *p);
    }
    printf("\n");
    return 0;

}
