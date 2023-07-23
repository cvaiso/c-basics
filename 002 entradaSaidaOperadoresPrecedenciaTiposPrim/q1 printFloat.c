/*
Faça um programa que leia três números e calcule a média.
*/

#include<stdio.h>

void main() {

    float x, y, z;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &x, &y, &z);
    float m = (x+y+z)/3.0;
    printf("Media: %f\n", m);

}