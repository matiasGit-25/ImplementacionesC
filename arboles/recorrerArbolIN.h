void recorrerArbolIN(nodo_t* raiz)
{
    if (raiz == NULL)
        return;

    recorrerArbolIN(raiz->subarbolIzq);

    printf("%d", (*raiz).dato);

    recorrerArbolIN(raiz->subarbolDer);
}
