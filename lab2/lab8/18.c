#include <stdio.h>
#include <stdlib.h>

void printArray(int n, int m, int **arr){
    for(int r=0; r<n; r++){
        for(int c=0; c<m; c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
}

/*int main()
{
    int x = 3, y = 4;
    int array[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            array[i][j] = i+j;
        }
    }
    printArray(x, y, array);
    return 0;
}*/
