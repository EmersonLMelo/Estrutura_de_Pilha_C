#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tlivro {
	int codigo;
	char nome[50];
	char autor[50];
	
};

struct tpilha{
	tlivro tam[5];
	int ini;
	int fim;
};

tpilha pilha;

void pilha_entrar(){
	if(pilha.fim == 5){
		printf("Pilha cheia");
		system("pause");
			}
	else {
		printf("\n Digite o código do livro:");
		scanf("%d", &pilha.tam[pilha.fim].codigo);
		printf("\n Digite o nome do livro:");
		scanf("%s", &pilha.tam[pilha.fim].nome);
		printf("\n Digite o nome do autor:");
		scanf("%s", &pilha.tam[pilha.fim].autor);
		pilha.fim++;
	}
}

void pilha_sair(){
	if(pilha.ini == pilha.fim){
		printf("Pilha vazia");
	}
	else {
		pilha.tam[pilha.fim-1].codigo = 0;
		strcpy(pilha.tam[pilha.fim-1].nome, "");
		strcpy(pilha.tam[pilha.fim-1].autor, "");
		pilha.fim--;
	}
}

void pilha_mostrar(){
	int i;
	for (i=0; i < 5; i++){
		printf("[");
		printf("%d", pilha.tam[i].codigo);
		printf("]");
	}
}

int main(){
	int op;
	while(op < 4){
	
	printf("Escolha uma opção:");
	printf("\n1-empilhar:");
	printf("\n2-desempilhar:");
	printf("\n3-mostrar:\n");
	scanf("\n%d", &op);
	if(op == 1){
		pilha_entrar();
	}
	if(op == 2){
		pilha_sair();
	}
	if(op == 3){
		pilha_mostrar();
	}
	
	}
	
}
