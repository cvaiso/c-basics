/*
Faça um programa que calcule a multiplicação 
de dois números utilizando apenas a operação de soma.
*/

#include<stdio.h>
#include<stdlib.h>

void main() {

    int a,b, m = 0;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    int i = 1; 
    while ( i <= abs(b) ) {
        m += abs(a);
        i++;
    }
    if ( a < 0 && b > 0 || a > 0 && b < 0 ) 
        m = -m;
    
    printf("%d x %d = %d\n", a, b, m);

}