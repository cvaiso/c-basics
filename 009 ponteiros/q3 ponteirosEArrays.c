/*
Implemente um programa que calcula a soma dos elementos 
de um array de ponteiros para float de tamanho 5. Os 
valores do array devem ser preenchidos pelo usuário.
*/

#include<stdio.h>

void main() {
    float a[5], *p[5], s = 0, *ps = &s;
    for (int i = 0; i < 5; i++) {
        p[i] = &a[i];
        printf("Digite um numero: ");
        scanf("%f", p[i]);//equivale a scanf("%f", &a[i]);
        *ps += *p[i];
    }
 
    printf("Soma dos elementos do array: %f\n", *ps);
        
}
