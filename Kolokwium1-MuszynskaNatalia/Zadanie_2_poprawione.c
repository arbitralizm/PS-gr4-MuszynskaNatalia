#include <stdio.h>
#include <stdlib.h>

int funkcja(int n, int m, int p)
{
    if (m == 0)
    {
        n = 1;
    }
    else
    {
        int wynik = n;
        for( int i = 1; i < m; i++)
        {
            n *= wynik;
        }
    }
    return n/p;
}


int main()
{
    int n, m, p;
    printf("Wprowadz podstawe potegi: ");
    scanf("%d", &n);
    do
    {
        printf("Wprowadz wykladnik potegi: ");
        scanf("%d", &m);
    }
    while(m<0);

    do
    {
        printf("Podaj dzielnik: ");
        scanf("%d", &p);
    }
    while(p == 0);
    printf("Dla podanych liczb wynik jest rowny: %d", funkcja(n, m, p));
    return 0;

}


