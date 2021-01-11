#include "fila.h"
struct fila {
	int qtd;
	struct no * prim;
	struct no * fim;
};

struct fila * criar_fila(void)
{
    struct fila * ap_f;
    ap_f = (struct fila *) malloc (sizeof (struct fila));
    if(ap_f){
        ap_f->qtd = 0;
        ap_f->prim = NULL;
        ap_f->fim = NULL;
    }
    return ap_f;
}

int fila_vazia(struct fila * f){
/*  Outras versões:
    if(!f->qtd)
        return 1;
    return 0;
*/
    return (!f->qtd);
}

void mostrar_fila(struct fila * f){
    struct no * aux;
    printf("\n");
    if (fila_vazia (f))
        printf ("Fila Vazia!\n");
    else {
        aux = f->prim;
        while(aux){
            printf ("%d ", aux->info);
            aux = aux->prox; 
        }
    } 
    printf("\n");
}

int inserir_fim(int i, struct fila * f){
    struct no * aux;
    struct no * novo = criar_no (i); // i
    if (!novo)
        return 0;
    if (fila_vazia (f)){
        f->prim = novo;
    	f->fim = novo;
    }
    else {
        aux = f->prim;
        while (aux->prox) { // (aux->prox != NULL)
            aux = aux->prox;
        }
        aux->prox = novo;
        f->fim = novo;
    }
    f->qtd++;
    return 1;
}

int remover_inicio (int * i, struct fila * f) {
	
    struct no * aux;
    
	if (fila_vazia(f)){
		printf("Fila vazia!\n");
		return 0;
	}
    
    aux = f->prim;
    *i = aux->info;
    f->prim = f->prim->prox;
    f->qtd--;
    printf("%d removido com sucesso!\n", *i);
    liberar_no(aux);

	return 1;
}

void exibir_inicio(struct fila * f){
	if(fila_vazia(f)){
		printf("Fila vazia!\n");
	}
	else{
		printf ("Inicio: %d\n", f->prim->info);
	}
}

void exibir_fim(struct fila * f){
	if(fila_vazia(f)){
		printf("Fila vazia!\n");
	}
	else{
		printf("Final: %d\n", f->fim->info);
	}
}
