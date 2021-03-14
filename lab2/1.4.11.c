#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>


// a

/*int main()
{
    int a, b, c, d, x;
    x = 2;
    printf("Wpisz liczbe a = ");
    scanf("%d", &a);
    printf("Wpisz liczbe b = ");
    scanf("%d", &b);
    printf("Wpisz liczbe c = ");
    scanf("%d", &c);
    printf("Wpisz liczbe d = ");
    scanf("%d", &d);
    for(int i = x; i <= x; i++)
    {

        int wynik = abs(a) * (i*i) + b * i + c;
        if (wynik > d)
        {
            printf("Wynik: %d", wynik);
        }
        else
        {
            printf("D jest wieksze od wyniku dzialania!!! \n");
        }

    }



    return 0;
}*/


// b

/*int main()
{
     int a, b, c, d, x;
    x = 2;
    printf("Wpisz liczbe a = ");
    scanf("%d", &a);
    printf("Wpisz liczbe b = ");
    scanf("%d", &b);
    printf("Wpisz liczbe c = ");
    scanf("%d", &c);

    for(int i = x; i <= x; i++)
    {
        int wynik;
        wynik = 5 * (i*i) + a * i + b;
        if ( wynik < c)
        {
            printf("Wynik jest rowny:  %d", wynik);
        }
        else
        {
            printf("Rozwiazanie nie istnieje \n");
        }

    }



    return 0;
}*/

// c

int main()
{
     int a, b, c, d, x;
    x = 2;
    printf("Wpisz liczbe a = ");
    scanf("%d", &a);
    printf("Wpisz liczbe b = ");
    scanf("%d", &b);
    printf("Wpisz liczbe c = ");
    scanf("%d", &c);

    for(int i = x; i <= x; i++)
    {
        int wynik;
        wynik = 5 * (i*i) + a * i + b;
        if ( wynik <= c)
        {
            printf("Wynik jest rowny:  %d", wynik);
        }
        else
        {
            printf("Rozwiazanie nie istnieje \n");
        }

    }



    return 0;
}
