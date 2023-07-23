/*
2.	Crie uma função recursiva que recebe um inteiro 
e informa se ele é primo ou não (1 se for e 0 se não 
for primo). Crie um programa que solicita um inteiro 
do usuário e informa se ele é primo ou não usando a 
função anterior.
*/
#include<stdio.h>

int primoaux(int x, int d) {
    if (d > x/2) return 1;
    if (x % d == 0) return 0;
    return primoaux(x,d+1);
}
int primo(int x) {
    return primoaux(x,2);
}


void main() {
    int a;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &a);
    if (primo(a))
        printf("%d eh primo.\n", a);
    else
        printf("%d nao eh primo.\n", a);
}