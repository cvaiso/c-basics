/*
Crie uma função que recebe uma string str e um inteiro x 
e retorna uma string sem os x primeiros caracteres de str. 
Crie um programa que solicta uma string e um inteiro do 
usuário e imprime a string resultante do uso da função criada.
*/

#include<stdio.h>

char* corta(char[], int);
void main();

char* corta(char s[], int x) {
	return &s[x];
}

void main() {
	char str[20];
	int i;
	printf("Digite uma string: ");
	gets(str);
	printf("Digite um inteiro: ");
	scanf("%d", &i);
	printf("\n%s sem os %d primeiros caracteres: %s\n", 
		str, i, corta(str,i));
}