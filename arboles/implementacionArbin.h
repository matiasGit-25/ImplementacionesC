typedef int dato_t;

typedef struct nodo{

    dato_t dato;
    struct nodo* subarbolIzq;
    struct nodo* subarbolDer;

}nodo_t;


nodo_t* crearNodo(dato_t datoNuevo)
{

    nodo_t* nuevoNodo = (nodo_t*)malloc(sizeof(nodo_t));

    (*nuevoNodo).dato = datoNuevo;
    nuevoNodo->subarbolIzq = NULL;
    nuevoNodo->subarbolDer = NULL;

    return(nuevoNodo);
}
