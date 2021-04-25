#include <stdio.h>
#include <stdlib.h>


int zad1e()
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
    short max = tab[0];
    short count_max = 0;
    for (short *p = tab; p < tab + n; ++p) {
        if (max < *p) {
            max = *p;
        }
    }
    for (short *p = tab; p < tab + n; ++p) {
        if (*p == max) {
            count_max++;
        }
    }
    printf("Najwiekszy element tablicy: %d\nWystapil on %d razy", max, count_max);
    printf("\n");
    for (short *p = tab; p < tab + n; ++p) {
        printf("%5d ", *p);
    }
    printf("\n");
    return 0;
}
