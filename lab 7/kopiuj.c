#include <stdio.h>
#include <stdlib.h>

void kopiuj(char *nap1, char nap2[])
{
    for(int i=0; i<len(nap1); i++)
        nap2[i] = nap1[i];
}

void kopiuj_wchar(wchar_t *nap1, wchar_t nap2[])
{
    for(int i=0; i<wchar_len(nap1); i++)
        nap2[i] = nap1[i];
}




