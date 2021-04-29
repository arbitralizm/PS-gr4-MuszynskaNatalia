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
        printf("Podaj ilosc liczb, ktora chcesz wprowadzic:  ");
        scanf("%d", &n);

    }
    while (n<=0);
    float liczba;
    int dodatnie = 0;
    int podzielne = 0;
    for(int i = 1; i<=n; i++)
    {
        printf("Podaj liczbe rzeczywista:  ");
        scanf("%f", &liczba);
        if(liczba>0)
        {
            dodatnie++;
        }
        if(ceiling(liczba)%7 == 0)
        {
            podzielne++;
        }
    }
    printf("Liczb, ktorych sufit jest podzielny przez 7 jest: %d \n liczb, ktore sa dodatnie jest: %d", podzielne, dodatnie);
    return 0;
}

