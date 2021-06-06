#include <stdio.h>
#include <stdlib.h>


void kopiuj25(char *nap1, char **nap2){
    char tab[] = {};
    kopiuj(nap1, tab);
    **nap2 = tab;
}
