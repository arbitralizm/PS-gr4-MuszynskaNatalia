#include <stdio.h>
#include <stdlib.h>
#include "zad1.c"
#include "zad2.c"
#include "zad3.c"
#include "zad4.c"
#include "zad5.c"

void generuj(int tab[], int n)
{
    srand(time(0));
    int lim=99;
    for(int i=0; i<n; i++)
    {
        tab[i]=rand() % lim+1;
        printf("%d, ",tab[i]);
    }
}

void collatz(short tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i]%2!=0 && tab[i] > 0)
            tab[i] = 3*tab[i]+1;
        if(tab[i]%2==0 && tab[i] > 0)
        {
            do{
                tab[i] /= 2;
            }while(tab[i]%2==0);
        }
        if(tab[i]<=0)
            continue;

        printf("%d, ", tab[i]);
    }
}

void zmien(short tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i]%2!=0)
            tab[i]*=2;
        else
            tab[i]*=-1;

        printf("%d, ",tab[i]);
    }
}

void signum(short tab[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(tab[i]>0)
            tab[i]=1;
        else
            tab[i]=-1;

        printf("%d, ",tab[i]);
    }
}

void odwroc(short tab[], int lewy, int prawy)
{
    int tmp, rozm = (prawy-lewy)/2+lewy;
    for(int i=1; i<=rozm; i++)
    {
        tmp = tab[i];
        tab[i]=tab[prawy];
        tab[prawy]=tmp;
        prawy--;
    }
}

int ileNieparzystych(const short tab[], int n)
{
    int nieparzyste=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i]%2!=0)
            nieparzyste++;
    }
    return nieparzyste;
}

int ileParzystych(const short tab[], int n)
{
    int parzyste=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i]%2==0)
            parzyste++;
    }
    return parzyste;
}

int ileMaksymalnych(const short tab[], int n)
{
    int max=tab[0],count=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i]>max)
            max=tab[i];
    }
    for(int i=0; i<n; i++)
    {
        if(tab[i]==max)
            count++;
    }
    return count;
}

int ileDodatnich(const short tab[], int n)
{
    int dodatnie=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] > 0)
            dodatnie++;
    }
    return dodatnie;
}

int ileUjemnych(const short tab[], int n)
{
    int ujemne=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] < 0)
            ujemne++;
    }
    return ujemne;
}

int ileZerowych(const short tab[], int n)
{
    int zerowe=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i] == 0)
            zerowe++;
    }
    return zerowe;
}

int main()
{
/*
    zad1();
    zad2();
    zad3();
    zad4();
    zad5();
*/
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    short array[n];
    for(int i=0; i<n; i++)
    {
        array[i] = rand() % 199 - 99;
        printf("%d\n", array[i]);
    }
    printf("Dodatnie: %d\n", ileDodatnich(array, n));
    printf("Ujemne: %d\n", ileUjemnych(array, n));
    printf("Zerowe: %d\n", ileZerowych(array, n));
    return 0;
}
