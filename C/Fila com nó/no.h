#include <stdlib.h>
#include <stdio.h>

struct no {
    int info;
    struct no * prox;
};

struct no * criar_no (int);
void liberar_no (struct no *);
