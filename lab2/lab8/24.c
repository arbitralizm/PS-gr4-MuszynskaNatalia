#include <stdio.h>
#include <stdlib.h>
#include "zad18.c"

void swapColumns(int n, int m, int arr[n][m]){
    for(int r=0; r<n; r++){
        int tmp = arr[r][0];
        arr[r][0] = arr[r][m-1];
        for(int c=1; c<m; c++){
            int tmp2= arr[r][c];
            arr[r][c] = tmp;
            tmp = tmp2;
        }
    }
}

int main()
{
    int n = 3, m = 4;
    int array[n][m];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++)
            array[i][j] = i+j;
    }

    printArray(n, m, array);
    swapColumns(n, m, array);
    printArray(n, m, array);
    return 0;
}
