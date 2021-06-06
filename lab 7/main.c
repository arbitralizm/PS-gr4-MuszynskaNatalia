#include <stdio.h>
#include <stdlib.h>

#include "kopiujn.c"
#include "wytnijzn.c"
#include "kopiuj.c"
#include "kopiuj25.c"
#include "suma_elementow.c"

int len(char* nap)
{
    int i;
    for(i=0; nap[i]!=0; i++);

    return i;
}
int wchar_len(wchar_t* nap)
{
    int i;
    for(i=0; nap[i]!=0; i++);

    return i;
}

int main()
{
    int tab[100][100] = {};
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            tab[i][j] = i*j;
        }
    }
    printf("%d", suma_elementow2(4, 10, tab)); //przy powy¿szym przypisywaniu elementów do tablicy wychodz¹ dziwne wyniki, czêsto same 0
    return 0;
}
