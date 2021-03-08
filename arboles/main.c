#include <stdio.h>
#include <stdlib.h>
#include "implementacionArbin.h"
#include "recorrerArbolIN.h"

int main(){

    //Inicialización arbol
    int a=1;

    nodo_t* raiz        = crearNodo(a);

    raiz->subarbolIzq   = crearNodo(2);

    raiz->subarbolDer   = crearNodo(3);

    raiz->subarbolIzq->subarbolIzq  = crearNodo(4);

    raiz->subarbolIzq->subarbolDer  = crearNodo(5);


    recorrerArbolIN(raiz);
//    recorrerArbolPRE();
//    recorrerArbolPOS();


    return 0;
}
