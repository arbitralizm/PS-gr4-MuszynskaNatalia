#include <stdio.h>
#include <stdlib.h>

int funkcja(int n, int m, int p)
{
    int x = n;
    int wynik = 1;
    for(int i = 1; i<=m; i++)
    {
        wynik *= x;

    }
    if(n==0 || m==0 || p==0)
    {
        printf("Blad");
    }
    return wynik;
}
int main()
{
    int n, m, p;
    printf("Podaj liczby calkowite n, m, p, co najmniej jedna z liczb musi byc rozna od 0: \n");
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    printf("Wynik dzialania n^m/p jest rowny: ");
    printf("%d", funkcja(n, m, p)/p);
    return 0;
}
