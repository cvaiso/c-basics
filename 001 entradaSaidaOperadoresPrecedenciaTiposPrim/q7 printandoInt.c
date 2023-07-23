/*
Crie um programa que pede para o usuário digitar 
um caractere e um inteiro e imprime os dois em 
uma mesma linha separados por um espaço.
*/

#include<stdio.h>
void main() {
    
    char c;
    int i;    
    
    printf("Digite um caractere e um inteiro: ");
    scanf(" %c %d", &c, &i);
    
    printf("\n%c %d\n", c, i);
    
}