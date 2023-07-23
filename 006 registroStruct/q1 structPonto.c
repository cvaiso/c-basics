/*
Crie um registro chamado Ponto com os campos x e y (float). 
Crie um programa que solicita dois pontos A e B e calcula a 
distância entre eles. A distância d entre 2 pontos A e B é: 
d2 = (xB - xA)2 + (yB-yA)2
*/
#include<stdio.h>
#include<math.h>

typedef struct _ponto {
    double x, y;
} ponto;

void main() {

  ponto A, B;

  printf("Digite as coordenadas x e y do ponto A: ");
  scanf("%lf %lf", &A.x, &A.y);
  printf("Digite as coordenadas x e y do ponto B: ");
  scanf("%lf %lf", &B.x, &B.y);
  double d = sqrt( pow(B.x - A.x, 2) + pow(B.y-A.y, 2) );
  printf("A distancia entre os pontos A e B eh: %.2lf\n", d);

}