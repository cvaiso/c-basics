/*
Crie um programa que pede para o usuário digitar 
um caractere (variável do tipo char) e imprime 
esse caractere logo em seguida.
*/

#include<stdio.h>

void main() {

    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("Voce digitou '%c'.\n", caractere);

}