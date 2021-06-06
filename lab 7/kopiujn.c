#include <stdio.h>
#include <stdlib.h>


void kopiujn(char *nap1, char *nap2, int n)
{
    int i=1;
    while(nap2[i]!=0)
        i++;

    if(len(nap1)>=n){
        for(int j=0; j<n; j++)
            nap2[i+j] = nap1[j];
    }
    else{
        for(int j=0; j<len(nap1); j++)
            nap2[i+j] = nap1[j];
    }
}


void kopiujn_wchar(wchar_t *nap1, wchar_t *nap2, int n)
{
    int i=1;
    while(nap2[i]!=0)
        i++;

    if(wchar_len(nap1)>=n){
        for(int j=0; j<n; j++)
            nap2[i+j] = nap1[j];
    }
    else{
        for(int j=0; j<wchar_len(nap1); j++)
            nap2[i+j] = nap1[j];
    }
}

