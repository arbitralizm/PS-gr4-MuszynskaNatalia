#include <stdio.h>
#include <stdlib.h>
#include "zad18.c"

int** transposeArray(int n, int m, int **arr){
    int **tmp_arr = malloc(n*sizeof(int*));
    for(int r=0; r<n; r++){
        tmp_arr[r] = malloc(m*sizeof(int));
        for(int c=0; c<m; c++){
            tmp_arr[r][c] = arr[c][r];
        }
    }
    return tmp_arr;
}

int main()
{
    int n = 3, m = n;
    int **array;
    array = malloc(n*sizeof(int*));
    for(int i=0; i<n; i++){
        array[i] = malloc(m*sizeof(int));
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            array[i][j] = 2*i+j;
    }

    int **arr = transposeArray(n, m, array);
    printArray(n, m, array);
    printf("-------\n");
    printArray(n, m, arr);
    return 0;
}
