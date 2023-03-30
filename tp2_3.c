#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main()
{
    int mt[N][M];
    for(int (*filas)[M]=mt, (*fin)[M] = filas + N;filas != fin; filas++) { 
        for(int *valor = *filas, *fin2 = *filas + M; valor != fin2; ++valor) { 
            *valor=1+rand()%100; 
            printf("%d ", *valor); 
        } 
        printf("\n"); 
    }
    return 0;
}


