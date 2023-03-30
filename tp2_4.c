#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

int main()
{
    int j;
    time_t t;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu PC[N];
    srand(time(NULL));
    for ( int i = 0; i < N; i++)
    {
        PC[i].velocidad=1+rand()%3;
        PC[i].anio=rand()%9 + 2015;
        PC[i].cantidad=1+rand()%8;
        j=rand()%5;
        PC[i].tipo_cpu=&tipos[j][10];
    }
    
    return 0;
}
