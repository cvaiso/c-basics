/*
Faça um programa que leia dois números e 
indique se são iguais ou, se diferentes, 
mostre o maior e o menor (nesta sequência).
*/

#include<stdio.h>

void main() {

    int a, b;
    printf("Informe 2 inteiros: ");
    scanf("%d %d", &a, &b);

    if (a == b) { 
        printf("\nSao iguais\n");
    }
    else {
        printf("\nSao diferentes\n");
        if (a > b)  printf("\n%d maior que %d\n", a, b);
        else        printf("\n%d maior que %d\n", b, a);
    }
    
}

    