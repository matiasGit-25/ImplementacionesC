void recorrerArbolPOS(nodo_t* raiz)
{
    if (raiz == NULL)
        return;

    recorrerArbolPOS(raiz->subarbolIzq);

    recorrerArbolPOS(raiz->subarbolDer);

    printf("%d", (*raiz).dato);
}
