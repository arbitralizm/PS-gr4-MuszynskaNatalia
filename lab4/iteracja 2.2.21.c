#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

// iteracja

unsigned long long iteracja (int n)
{



        if(n == 0)
        {
            return 1;
        }
        else
        {
            unsigned long long wynik=1, wynik2;
             for(int i = 1; i<=n; i++)
             {
                 wynik2 = 2*wynik+5;
                 wynik = wynik2;
             }
            return wynik;
        }

}
int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita n: ");
    scanf("%d", &n);
    printf("Wynik to: ");
    printf("%llu", iteracja(n));
    return 0;
}


