#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*
    Agrega un nodo al inicio de la lista siguiente
*/
void push(PTR_NODO *pila, int dato)
{
     ST_nodo *nodo = (ST_nodo*)malloc(sizeof(ST_nodo)); // Crea un nuevo nodo

     if (nodo != NULL)
        {
         nodo->dato = dato;
         nodo->siguiente = *pila;   // nodo->siguiente va a apunta al primer nodo siguiente
         *pila=nodo;                // pila va a apuntar al nuevo nodo, con esto hacemos que el nuevo nodo sea ahora el primer nodo de la lista siuiente
        }
}

/*
    Elimina el primer nodo de la lista siguiente
*/
int pop(PTR_NODO *pila)
{
     int contiene = (*pila)->dato;

     ST_nodo *nodo = *pila;         // El nuevo nodo apunta al primer nodo de la lista siguiente

     *pila = (*pila)->siguiente;    // El segundo nodo de la lista siguiente va a ser el primero

     free(nodo);                    // Borra el primer nodo de la lista siguiente
     return contiene;               // Regresa el valor que  que se eliminó
}

/*
    Regresa 1 si no hay nodos en la lista siguiente y cero en caso contrario
*/
int pila_vacia(PTR_NODO *pila)
{
    return (*pila == NULL ? 1:0);
}
