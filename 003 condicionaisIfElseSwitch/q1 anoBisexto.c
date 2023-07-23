
//Fazer um programa que solicite um ano e informe 
//se é bissexto ou não. Um ano bissexto é divisível 
//por 400 ou se ele for divisível por 4 e não por 100.


#include<stdio.h>

void main() {

    int ano;
    printf("Informe um ano: ");
    scanf("%d", &ano);

    if ( ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0 )
        printf("%d eh bissexto.\n", ano);
    else
        printf("%d nao eh bissexto.\n", ano); 

/*
    switch ( ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0 ) {
        case 1: 
            printf("%d eh bissexto.\n", ano);
            break;
        case 0:
            printf("%d nao eh bissexto.\n", ano);
    }
*/

}