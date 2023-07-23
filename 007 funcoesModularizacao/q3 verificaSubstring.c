/*
Crie uma função que recebe uma string e um caractere e 
retorna a posição do caractere se ele existir na string, ou 
-1 caso ele não exista na string. Crie uma função que recebe 
duas strings e retorna 1 se a primeira for uma substring da 
segunda ou 0, caso contrário. Utilize a primeira função para 
implementar a segunda. Crie um programa que solicite duas 
strings e verifica se a primeira é uma substring da segunda.
*/


#include<stdio.h>

int posicao(char[], char);
int substring(char[], char[]);
void main();

int posicao(char s[], char c) {
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return i;
	return -1;		
}
    

int substring(char s[], char u[]) {
	int ehSubstring = 1;
	int n, p = posicao(s,u[0]);
	n = p;
	while(p != -1) {

		for (int i = 1; u[i] != '\0'; i++ ){
			if (s[n+i] != u[i]) {
				ehSubstring = 0;
				break;
			}
		}
		if (ehSubstring) return 1;
		p = posicao(&s[n+1], u[0]);
		n = n + p + 1;
		ehSubstring = 1;
	}
	return 0;
}

void main() {
	char str[20], sub[20];
	printf("Digite uma string: ");
	scanf(" %s", str);
	printf("Digite uma outra string: ");
	scanf(" %s", sub);
	if (substring(str,sub))
		printf("\n%s eh substring de %s\n", sub, str);
	else
		printf("\n%s nao eh substring de %s\n", sub, str);	

}