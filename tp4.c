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
    struct Nodo *Siguiente;
}Nodo;

Nodo *CrearNodo(Tarea T){
    Nodo *nuevoNodo = (Nodo *)malloc(sizeof(Nodo));
    nuevoNodo -> T = T;
    nuevoNodo ->Siguiente= NULL;
    return nuevoNodo;
}

void InsertarNodo(Nodo **Start, Nodo *nuevoNodo){
    nuevoNodo ->Siguiente = *Start;
    *Start = nuevoNodo;
}

int main(){
    int id = 1000;
    int continuar= 0;
    char buff[100];

    
    Nodo *tareasPendientes = NULL;
    Nodo *tareasRealizadas = NULL;
    printf("Seleccione una opcion:\n1=Ingresar nueva tarea || 0= Finalizar progama");
    scanf("%d", &continuar);

    if(continuar == 1){
        Tarea nuevaTarea;
        nuevaTarea.TareaID = id;
        id++;
        printf("Ingrese una descripcion de la tarea: ");
        scanf("%s", buff);
        nuevaTarea.Descripcion = (char *)malloc(strlen(buff)+1)*sizeof(char);
        strcpy(nuevaTarea.Descripcion, buff);
        printf("Ingrese la duracion de la tarea: ");
        scanf("%d", nuevaTarea.Duracion);
        


    }else if(continuar == 0){
        printf("Programa FinalizadO");
    }

    return 0;
}