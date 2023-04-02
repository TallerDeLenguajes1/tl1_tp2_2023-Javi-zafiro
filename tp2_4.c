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

void mostrar (struct compu *p);
void masVieja(struct compu *p);
void masVeloz(struct compu *p);

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
    mostrar(PC);
    masVieja(PC);
    masVeloz(PC);
    return 0;
}

void mostrar (struct compu *p){
    struct compu *aux;
    for (int i = 0; i < N; i++)
    {
        aux=p;
        p=p+i;
        printf("----PC %d----\n",i+1);
        printf("la velocidad es: %d\n", (*p).velocidad);
        printf("el año es: %d\n", (*p).anio);
        printf("la cantidad de nucleos es: %d\n", (*p).cantidad);
        printf("la marca del cpu es: ");
        puts((*p).tipo_cpu);
        printf("\n");
        p=aux;
    }
    
}

void masVieja(struct compu *p){
    struct compu *aux;
    int anio=9999, pc;
    for (int i = 0; i < N; i++)
    {
        aux=p;
        p=p+i;
        if ((*p).anio<anio)
        {
            pc=i+1;
            anio=(*p).anio;
        }
        p=aux;
    }
    printf("la pc mas vieja es la numero %d\n",pc);
    printf("el año de fabricacion es: %d\n", anio);
    printf("\n");
    
}

void masVeloz(struct compu *p){
    struct compu *aux;
    int velMax=0, pc;
    for (int i = 0; i < N; i++)
    {
        aux=p;
        p=p+i;
        if ((*p).velocidad>velMax)
        {
            pc=i+1;
            velMax=(*p).velocidad;
        }
        p=aux;
    }
    printf("la pc mas veloz es la numero %d\n",pc);
    printf("su velocidad es: %d\n", velMax);
    printf("\n");
    
}