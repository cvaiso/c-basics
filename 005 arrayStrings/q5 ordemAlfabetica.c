/*
Criar um programa que armazena diversos nomes 
em um vetor de strings (matriz de char) e depois 
os imprime em ordem alfabética e cada um em uma linha.
*/

#include<stdio.h>
#include<string.h>


void main() {

	char nomes[5][20], aux[20];
	int p;

	for (int i = 0; i < 5; i++) {
		printf("Digite um nome: ");
		scanf(" %s", nomes[i]);
	}

	for (int i = 0; i < 5; i++) {
		p = i;
		for (int j = i+1; j < 5; j++) {
			if ( strcmp(nomes[j],nomes[p]) < 0 ) {
				p = j;
			}			
		}
		if (p != i) {
			strcpy(aux, nomes[p]); //equivale a aux = nomes[p];
			strcpy(nomes[p],nomes[i]); 
			strcpy(nomes[i],aux);			
		}
	}

	for (int i = 0; i < 5; i++)
		printf("\n%s", nomes[i]);

}

