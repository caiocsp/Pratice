/*Escreva um programa que receba uma string str, um inteiro p e um caractere ch, e insere o
caractere ch na posição p da string str. Se p for maior que o tamanho da string str, exiba uma
mensagem. Por exemplo, str = “programacao”, p = 3 e ch = 's', a string str passaria a ser
“prosgramacao”.*/

#include <stdio.h>
#include <string.h>

int main(){

	char str[41], cp[41];
	char ch;
	int p, i;

	printf("Digite um valor inteiro: ");
	scanf("%d", &p);
	
	printf("Digite um caractere: ");
	scanf(" %c", &ch);
	
	printf("Digite uma palavra: ");
	scanf(" %40[^\n]", str);
		

	if (strlen(str) - 1 < p){
		printf("Valor maior que a quantidade de caracteres de %s!", str);
	}
	else{
		for(i = 0; i <= strlen(str) + 1; i++){ 			
				cp[p] = ch;
			if(i >= p){
				cp[i + 1] = str[i];
			}
			else {
				cp[i] = str[i];
			}
				
		}
	cp[i + 1] = '\0';
	

	printf("A palavra é %s\n", cp);
	}

	return 0;
}
