/*
Faça um programa que leia a idade de uma pessoa 
expressa em anos, meses e dias e mostre-a expressa 
apenas em dias. Para esta questão, considere que 
todos os meses têm 30 dias e todos os anos têm 365 dias.
*/

#include<stdio.h>

void main() {

    int d, m, a;
    printf("Digite a idade da pessoa em anos, meses e dias: ");
    scanf("%d %d %d", &a, &m, &d);
    int dias = a*365 + m*30 + d;
    printf("Idade em dias: %d\n", dias);

}