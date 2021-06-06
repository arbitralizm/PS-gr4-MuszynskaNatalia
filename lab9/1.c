#include <stdio.h>
#include <stdlib.h>

typedef struct zespolone{
    double im;
    double re;
} zespolone;

zespolone dodaj(zespolone liczba1, zespolone liczba2){
    zespolone tmp = {liczba1.re + liczba2.re, liczba1.im + liczba2.im};
    return tmp;
}

int main()
{
    zespolone l1 = {5, 3};
    zespolone l2 = {2, 7};
    zespolone wynik = dodaj(l1, l2);
    printf("%f + %fi", wynik.re, wynik.im);
    return 0;
}
