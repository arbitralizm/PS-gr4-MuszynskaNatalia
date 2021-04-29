#include <stdio.h>
#include <stdlib.h>

double ciag (int n)
{
    double licznik = 2*n +1;
    double mianownik = n*n - 4;

    return licznik/mianownik;
}

int main()
{
    int n;
    do
    {
        printf("Podaj liczbe n rozna od zera: ");
        scanf("%d", &n);
    }
    while(n < 0 || n == 2);

    printf("%d wyrazem ciagu jest %lf", n, ciag(n));

    return 0;
}
