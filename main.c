#include <stdio.h>
#include <math.h>
#include "pilha.h"
#include "fila.h"
#include "tokenizacao.h"

int main() {
	printf("--- Teste pilha ---\n");
	printf("Digite uma expressao:\n");
	Pilha *p = pilha_criar();
	Fila *f = fila_criar();
	Token t = token_proximo();
	while(t.tipo != FIM && t.tipo != ERRO) 
	{
		//teste pilha
		pilha_push(p, t);
		printf("\nToken pilha = ");
		pilha_imprimir(p);	
		t = token_proximo();			
	}
	printf("\n\n================== ");
	printf("\n\n--- Teste fila ---\n");
	printf("Digite uma expressao:\n");
	Token a = token_proximo();
	while(a.tipo != FIM && a.tipo != ERRO) 
	{
		//teste fila
		printf("\nToken fila = ");
		fila_adicionar(f, a);
		fila_imprimir(f);
		a = token_proximo();		
	}	
	return 0;
}
