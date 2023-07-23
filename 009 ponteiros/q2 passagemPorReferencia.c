/*
Implemente a função Fibonacci utilizando passagem 
por referência e crie um programa que utiliza a 
função a partir de um valor digitado pelo usuário.
*/

#include<stdio.h>

//0 1 1 2 3 5 8
int fibonacci (int *p) {
    int a = 0, b = 1, s;
    for (int i = 2; i < *p; i++) {
        s = a + b;
        a = b;
        b = s;
    }
    return b;
}

int fib (int *p) {
    if (*p == 1) return 0;
    if (*p == 2) return 1;
    int p1 = *p-1, p2 = *p-2;
    return fib(&p1) + fib(&p2);
}

void main() {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    printf("O %d-nesimo termo eh: %d\n", n, fibonacci(&n));
}