/*
Faça um programa que calcule a média de n números 
informados pelo usuário  até  ele  informar  o  
número  0.  Por  exemplo,  se  o  usuário 
informar os números 9 6 2 8 0, o programa
deve calcular a média (9 + 6 + 2 + 8) / 4.
*/

#include<stdio.h>

void main() {

    float a, s = 0, q = 0;
    
    while (1) {
        printf("Digite um numero ou 0 para parar: ");
        scanf("%f", &a);
        if (a == 0) break;
        s += a;
        q++; // equivale a q += 1; que equivale a q = q + 1;
    }
    printf("Media: %.2f\n", s/q);

}