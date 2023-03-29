#include <stdio.h>
#include <stdlib.h>

#define N 20

int main()
{
    int i;
    double vt[N], *p, *aux;
    p=vt;
    for(i = 0;i<N; i++)
    {
        aux=p;
        p=p+i;
        *p=1+rand()%100;
        printf(" %f ", *p);
        p=aux;
    }

    return 0;
}
