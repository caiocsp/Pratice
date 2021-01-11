#include "fila.h"

//Comando: gcc -o fila main.c fila.c fila.h no.c no.h

int main(){

	int o, i;
	struct fila * f;
	f = criar_fila();

	do{

		printf("\n<0> Sair\n");
		printf("<1> Exibir Fila\n");
		printf("<2> Inserir na fila\n");
		printf("<3> Remover na fila\n");
		printf("<4> Exibir Primeiro\n");
		printf("<5> Exibir Ultimo\n");

		scanf("%d", &o);
		switch (o){

			case 0:
				printf("\nPrograma finalizado!\n");
			break;
			case 1:
				mostrar_fila(f);
			break;
			case 2:
				printf("Insira o valor: ");
				scanf("%d", &i);
				inserir_fim (i, f);
			break;
			case 3:
				remover_inicio(&i, f);
			break;
			case 4:
				exibir_inicio(f);
			break;
			case 5:
				exibir_fim(f);
			break;
			default:
				printf("\nInvalido!\n");
			break;
			
		}

	}while(o > 0);

	return 0;
}