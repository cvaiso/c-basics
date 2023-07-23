/*
Faça um programa que calcule o mínimo 
múltiplo comum (MMC) de dois inteiros.
*/

#include<stdio.h>

void main() {

    int a, b, d = 2, dividiu, primo, mmc = 1;
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    while (a > 1 || b > 1) {

        dividiu = 0;

        if (a % d == 0) {
            a = a / d;
            dividiu = 1;
        }
        if (b % d == 0) {
            b = b / d;
            dividiu = 1;
        }

        if ( dividiu ) {
            mmc *= d;
        }
        else {    
            do {
                d++;
                primo = 1;
                for ( int i = 2; i <= d/2; i++ ) {
                    if (d % i == 0) {
                        primo = 0;
                        break;
                    }
                }
            } while (!primo);
        }
        
    }

    printf("MMC: %d\n", mmc);

}

 
