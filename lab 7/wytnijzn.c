#include <stdio.h>
#include <stdlib.h>



void wytnijzn(char* nap1, char* nap2)
{
    int wyst[256] = {};
    for(int i=0; nap2[i]!=0; i++)
        wyst[nap2[i]]=1;

    for(int i=0, j=0; nap1[i]!=0; i++)
    {
        if(wyst[nap1[i]]==0){
            if(j<i)
                nap1[j] = nap1[i];
            j++;
        }
        nap1[j]=0;
    }
}
