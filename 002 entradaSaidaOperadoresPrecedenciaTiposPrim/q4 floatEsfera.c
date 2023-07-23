/*Faça um programa que calcule a área e 
o volume de uma esfera. Fórmulas: 
Área da esfera: 4πrr	(π vale 3.1415 e r é o raio)
Volume da esfera: 4πrrr/3
*/

#include<stdio.h>
#include<math.h>//fornece M_PI e pow

//#define PI 3.1415

void main() {
    //const float PI = 3.1415;
    float r;
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    float area = 4 * M_PI * pow(r,2);
    float volume = 4 * PI * pow(r,3) / 3;
    printf("\nArea: %f\nVolume: %f\n", area, volume);

}