/*
2.	Usando o registro Ponto da questão anterior, 
crie um registro chamado Retângulo, que contém o 
ponto superior esquerdo e um ponto inferior direito. 
Faça um programa que solicita do usuário os dados de 
um retângulo e imprima a área, o comprimento da diagonal 
e o perímetro desse retângulo.
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

  printf("Digite as coordenadas x e y do ponto superior esquerdo do retangulo: ");
  scanf("%lf %lf", &R.se.x, &R.se.y);
  printf("Digite as coordenadas x e y do ponto inferior direito do retangulo: ");
  scanf("%lf %lf", &R.id.x, &R.id.y);
  
  double b = R.id.x - R.se.x;
  double a = R.se.y - R.id.y;
  double area = a * b;
  double perimetro = a * 2 + b * 2;  
  double diagonal = sqrt( pow(b, 2) + pow(a, 2) );
  
  printf("Area do retangulo: %.2lf\n", area);
  printf("Perimetro do retangulo: %.2lf\n", perimetro);
  printf("Diagonal do retangulo: %.2lf\n", diagonal);

}
//se_______
//|        |
//________id