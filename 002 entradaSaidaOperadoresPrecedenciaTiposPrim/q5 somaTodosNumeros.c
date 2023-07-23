/*
Escreva um programa para calcular a soma de todos 
os números de 1 até um número inteiro positivo 
informado pelo usuário. 
Fórmula da soma dos números entre 1 e n: n(n+1)/2
*/

#include<stdio.h>

void main() {

    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    
    printf("Soma de 1 ate %d: %d\n", n, n*(n+1)/2);

}
