#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ceiling(float n){
    if (n<0)
        return n;
    else{
        if((int)n == n)
            return n;
        else
            return n + 1;
    }
}


int main()
{
    int n;


    do
    {
        printf("Wpisz ilosc liczb, ktora chcesz wprowadzic ");
        scanf("%d", &n);

    }
    while (n<=0);
    float liczba;
    int ujemne = 0; // deklaracja licznika liczb ujemnych z wartoscia poczatkowa 0
    int podzielne = 0;
    for(int i = 1; i<=n; i++)
    {
        printf("Wprowadz liczbe rzeczywista ");
        scanf("%f", &liczba);
        if(liczba<0)
        {
            ujemne++; //zwieksza licznik liczb ujemnych o 1
        }
        if(ceiling(liczba)%3 == 0)
        {
            podzielne++;
        }
    }
    printf("Liczb, ktorych sufit jest podzielny przez trzy jest: %d \n liczb ktore sa ujemne jest: %d", podzielne, ujemne);
    return 0;
}
