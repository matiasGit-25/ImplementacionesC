void recorrerArbolPRE(nodo_t* raiz)
{
    if (raiz == NULL)
        return;

    printf("%d", (*raiz).dato);

    recorrerArbolPRE(raiz->subarbolIzq);

    recorrerArbolPRE(raiz->subarbolDer);
}
