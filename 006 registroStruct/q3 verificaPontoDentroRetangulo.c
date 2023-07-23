/*
3.	Usando o registro Retângulo e Ponto das 
questões anteriores, faça um programa que solicita 
os dados de um retângulo e um ponto e informe se 
esse ponto está ou não inserido dentro do retângulo.
*/
#include<stdio.h>
#include<math.h>

typedef struct _ponto {
    double x, y;
} ponto;

typedef struct _retangulo {
    ponto se, id;
} retangulo;

void main() {

  retangulo R;
  ponto P;

  printf("Digite as coordenadas x e y do ponto superior esquerdo do retangulo: ");
  scanf("%lf %lf", &R.se.x, &R.se.y);
  printf("Digite as coordenadas x e y do ponto inferior direito do retangulo: ");
  scanf("%lf %lf", &R.id.x, &R.id.y);
  printf("Digite as coordenadas x e y do ponto P: ");
  scanf("%lf %lf", &P.x, &P.y);
  
  int pEstaDentro = R.se.x <= P.x && P.x <= R.id.x &&
     R.id.y <= P.y && P.y <= R.se.y; 
  
  if (pEstaDentro)
    printf("O ponto P esta dentro do retangulo.\n");
  else
    printf("O ponto P nao esta dentro do retangulo.\n");
    

}
//se_______
//|   P    |
//________id