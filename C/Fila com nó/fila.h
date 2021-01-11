#include "no.h"

typedef struct fila Fila;

struct fila * criar_fila (void);
void mostrar_fila (struct fila *);
int inserir_fim (int, struct fila *);
int remover_inicio (int *, struct fila *);
void exibir_inicio(struct fila *);
void exibir_fim(struct fila *);
