#include <stdio.h>
#include <stdlib.h>

int czy_pierwsza(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Podaj liczbe n: " );
    scanf("%d", &n);
    printf("Podzielniki liczby n bedace liczbami pierwszymi to: ");
    for(int i=0; i<=n; i++)
    {
        if(czy_pierwsza(i)==1)
        {
            if(n%i==0)
            {
                printf("%d ,",i);
            }
        }
    }

    return 0;
}
