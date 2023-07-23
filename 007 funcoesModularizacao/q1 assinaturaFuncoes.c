/*
Crie uma função que recebe um inteiro N e um caractere e 
imprime esse caractere N vezes. Crie um programa que solicita 
o inteiro e o caractere, utilize a função e imprima o resultado.
*/

#include<stdio.h>

void repete(int,char);
void main();

void repete(int x, char c) {
	for (int i = 0; i < x; i++) 
		printf("%c", c);
}

void main() {
	int a;
	char b;
	printf("Digite um inteiro e um caractere: ");
	scanf("%d %c", &a, &b);
	repete(a,b);		
}