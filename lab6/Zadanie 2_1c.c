#include <stdio.h>
#include <stdlib.h>

void odwroc(short tab[], int lewy, int prawy) {
    short *p;
    short *l;
    for (p = tab + prawy, l = tab + lewy ; l < tab + ((prawy - lewy + 1) / 2) + lewy; --p, ++l) {
        int tmp = *l;
        *l = *p;
        *p = tmp;
    }
}

int zad2_1c() {
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
    int lewy, prawy;

    printf("\nPodaj lewa granice: ");
    scanf("%d", &lewy);
    if (lewy < 0 || lewy >= n) {
        printf("Granica musi byc z przedzialu [0, %d\n]!", n);
        return 1;
    }

    printf("\nPodaj prawa granice: ");
    scanf("%d", &prawy);
    if (prawy < 0 || prawy >= n) {
        printf("Granica musi byc z przedzialu [0, %d\n]!", n);
        return 1;
    }

    printf("\nPo wywolaniu funkcji 'odwroc':\n");
    odwroc(tab, lewy, prawy);

    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d ", *p);
    }
    printf("\n");
    return 0;
}
