/*
Crie uma função que recebe duas matrizes 3x3 e calcula a multiplicação delas. 
Crie um programa que solicita os números de duas matrizes 3x3, utiliza a função 
criada e imprime a matriz resultante.
*/

#include<stdio.h>
#define T 3

void multmatriz(int[][T], int[][T], int[][T]);
void main();

void main() {
	int a[T][T], b[T][T], m[T][T]; 
	for (int l = 0; l < T; l++) 
		for (int c = 0; c < T; c++) {
			printf("Digite o elemento [%d][%d] da 1a matriz: ",l,c);
			scanf("%d", &a[l][c]);
		}
	for (int l = 0; l < T; l++) 
		for (int c = 0; c < T; c++) {
			printf("Digite o elemento [%d][%d] da 2a matriz: ",l,c);
			scanf("%d", &b[l][c]);
		}	

	for (int l = 0; l < T; l++) 
		for (int c = 0; c < T; c++)
			m[l][c] = 0;

	multmatriz(a,b,m);

	for (int l = 0; l < T; l++) {
		for (int c = 0; c < T; c++) {
			printf("%d\t", m[l][c]);
		}
		printf("\n");	
	}	
		
}

void multmatriz(int a[][T], int b[][T], int z[][T]) {
	for (int l = 0; l < T; l++) 
		for (int c = 0; c < T; c++)
			for (int r = 0; r < T; r++)
				z[l][c] += a[l][r] * b[r][c]; 
}
