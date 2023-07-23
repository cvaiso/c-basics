/*
Faça um programa que solicite um tempo em segundos 
e converta para horas, minutos e segundos.
*/

#include<stdio.h>

void main() {

    int seg;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &seg);

    int s = seg;

    int h = s / 3600;
    s %= 3600;
    int m = s / 60;
    s %= 60;

    printf("%ds equivalem a %dh%dm%ds\n", seg, h, m, s);
}