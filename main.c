#include <stdio.h>
#include "funciones.h"


int main()
{

 int i = 0, num1 =0 ;

 PTR_NODO pila = NULL;
 PTR_NODO pila2 = NULL;

    for(int i=0; i< 4; i++)
        {push(&pila, i);}

    while(pila != NULL)
    {
         num1=pop(&pila);
         push(&pila2, num1);
    }

    while(pila2 != NULL)
    {
        num1=pop(&pila2);
        if(i == 2)
            push(&pila, 8);
        push(&pila, num1);
        i++;
    }

    while(pila != NULL)
    {
         printf("\nPila: %i",pop(&pila));
    }

 return 0;
}
