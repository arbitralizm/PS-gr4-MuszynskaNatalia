#include <stdio.h>
#include <stdlib.h>

int suma_elementow(int n, int tab[n][100])
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
            sum+=tab[i][j];
    }
    return sum;
}


int suma_elementow2(int n, int m, int tab[n][m])
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            sum+=tab[i][j];
    }
    return sum;
}
