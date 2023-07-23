/*
1.	Crie uma função recursiva que recebe 2 inteiros 
e retorna a multiplicação de todos os números entre 
eles (conjunto fechado). Crie um programa que 
solicita do usuário dois inteiros e imprime o 
resultado da função anterior.
*/
#include<stdio.h>

int multEntre(int x, int y) {
    if ( x == y ) return x;
    if ( x > y )  return y * multEntre(x,y+1);  
    if ( x < y )  return x * multEntre(x+1,y);  
} 

void main() {
    int a,b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Multiplicacao de todos os numeros entre %d e %d: %d\n", 
        a, b, multEntre(a,b));
}