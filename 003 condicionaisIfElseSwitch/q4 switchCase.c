/*
Faça um programa que peça para o usuário 
digitar um número entre 2 e 10 e informe 
se ele é primo ou não utilizando o comando switch.
*/

#include<stdio.h>

void main() {

    int n;
    printf("Informe um inteiro: ");
    scanf("%d", &n);

    switch (n) {
        case 4: case 6: case 8: case 9: case 10:
            printf("\nNAO PRIMO\n");
            break;
        case 2: case 3: case 5: case 7:
            printf("\nPRIMO\n");
            break;
        default:
            printf("\nNAO EH NUMERO ENTRE 2 E 10\n");
    }

}
