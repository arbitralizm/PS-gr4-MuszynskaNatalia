#include <stdio.h>
#include <stdlib.h>

int sumArray15(int n, int ***arr){
    int sum = 0;
    for(int r=0; r<n; r++){
        for(int c=0; c<100; c++){
            for(int h=0; h<100; h++){
                sum+=arr[r][c][h];
            }
        }
    }

    return sum;
}

int main()
{
    int n = 2;

    int ***array = malloc(n*sizeof(int**));
    for(int i=0; i<n; i++){
        array[i] = malloc(100*sizeof(int*));
        for(int j=0; j<100; j++){
            array[i][j] = malloc(100*sizeof(int));
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<100; j++){
            for(int k=0; k<100; k++){
                array[i][j][k] = i+j-k;
            }
        }
    }

    printf("%d", sumArray15(n, array));
    return 0;
}
