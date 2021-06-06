#include <stdio.h>
#include <stdlib.h>
#include "zad18.c"

int sumArray(int n, int m, int **arr){
    int sum = 0;
    for(int r=0; r<n; r++){
        for(int c=0; c<m; c++)
            sum += arr[r][c];
    }

    return sum;
}

int main()
{
    int n = 3, m = 4;
    int **array;
    array = malloc(n*sizeof(int*));
    for(int k=0; k<n; k++)
        array[k] = malloc(m*sizeof(int));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            array[i][j] = i+j;
        }
    }
    printArray(n, m, array);
    printf("%d", sumArray(n, m, array));
    return 0;
}
