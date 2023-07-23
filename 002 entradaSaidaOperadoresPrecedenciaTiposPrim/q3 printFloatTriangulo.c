/*
Faça um programa que calcule a área de um triângulo. 
Fórmula da área de um triângulo: (base * altura) / 2
*/

#include<stdio.h>

void main() {

    float b, a;
    printf("Digite a base a altura do triangulo: ");
    scanf("%f %f", &b, &a);
    
    printf("Area: %f\n", (b*a)/2.0);

}