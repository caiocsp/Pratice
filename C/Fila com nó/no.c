#include "no.h"

struct no * criar_no (int i)
{
    struct no * aux;
    aux = (struct no *) malloc (sizeof(struct no));
    if(aux)
    {
        aux->info = i;
        aux->prox = NULL;
    }
    return aux;
}

void liberar_no (struct no *aux)
{
    if (aux)
        free(aux);
}
