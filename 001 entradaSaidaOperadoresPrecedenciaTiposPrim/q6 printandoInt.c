/*
Crie um programa que pede para o usuário digitar 
3 inteiros (variável do tipo int) e os imprime 
de forma invertida, cada um em uma linha separada.
*/

#include<stdio.h>

void main() {

    int x, y, z;
    printf("Digite 3 inteiros: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n%d\n%d\n%d\n", z, y, x);


}