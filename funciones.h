typedef struct nodo
{
 int dato;
 struct nodo *siguiente;
} ST_nodo, *PTR_NODO;


void push(PTR_NODO *pila, int dato);
int pop(PTR_NODO *pila);
int pila_vacia(PTR_NODO *pila);

