#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Tarea{
    int TareaID;
    char *Descripcion;
    int Duracion;
}Tarea;

typedef struct  Nodo
{
    Tarea T;
    Nodo *Siguiente;
}Nodo;



int main(){
    return 0;
}