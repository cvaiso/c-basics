/*
Preencha um vetor X de 10 elementos inteiros e positivos. 
Criar um vetor Y da seguinte forma: os elementos de Y com 
índice par receberão os  respectivos  elementos  de  X  
divididos  por  2;  os elementos  com índice ímpar 
receberão os respectivos elementos de X 
multiplicados por 3. No final, imprima o vetor X e o vetor Y.
*/

#include<stdio.h>


void main() {
  
  int x[10], y[10];

  for (int i = 0; i < 10; i++) {
      printf("Digite o %do inteiro: ", i+1);
      scanf("%d", &x[i]);
      if (i % 2 == 0) y[i] = x[i]/2;
      else            y[i] = x[i] * 3; 
  }

  for (int i = 0; i < 10; i++)
    printf("\nx[%d] = %d\ty[%d] = %d", i, x[i], i, y[i]);
  

}