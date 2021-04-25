#include <stdio.h>
#include <stdlib.h>


int zad1d()
{
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

    printf("\n");

    int count_odd = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p % 2 != 0) {
            count_odd++;
        }
    }
    printf("Ilosc elementow nieparzystych: %d\n", count_odd);

    int count_even = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (*p % 2 == 0) {
            count_even++;
        }
    }
    printf("Ilosc elementow parzystych: %d\n", count_even);

    printf("\n");
    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d ", *p);
    }
    printf("\n");
    return 0;
}
