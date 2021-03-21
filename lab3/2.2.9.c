#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>



float pierwiastek(float n, float x)
{

    for( float i = 1; i<20; i++)
    {
        if(i*i == n)
            printf("%f", i);

    int m;
    int wynik = 1;
   for(int i = 1; i<=x; i++)
   {
       wynik = wynik * m;
   }
    }

    return n;
}


int main()
{
    int n, x;
    printf("Wpisz liczbe n: ");
    scanf("%d", &n);
    printf("Wpisz liczbe x: ");
    scanf("%d", &x);
    printf("%f", pierwiastek(n,x));


    return 0;
}


