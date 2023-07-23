/*
Crie um programa que solicita para o usuário 
preencheruma matriz G 3x3  e  criar  2  vetores,  
SL  e  SC,  de  3  elementos  cada,  contendo 
respectivamente as somas das linhas e das 
colunas de G. Imprimir os vetores criados.
*/

#include<stdio.h>


void main() {
  const int L = 3;
  const int C = 3;

  int G[L][C], SL[L], SC[C];

  for (int i = 0; i < L; i++) {
      SL[i] = SC[i] = 0;
      for (int j = 0; j < C; j++) {
          printf("Digite o elemento [%d][%d]: ", i, j);
          scanf("%d", &G[i][j]);
      }
  }
  
  for (int i = 0; i < L; i++) {
      for (int j = 0; j < C; j++) {
        SL[i] += G[i][j];
      }
  }

  for (int i = 0; i < C; i++) {
      for (int j = 0; j < L; j++) {
        SC[i] += G[j][i];
      }
  }

  for (int i = 0; i < L; i++) {
      for (int j = 0; j < C; j++)
          printf("%d\t", G[i][j]);
      printf("\t-> %d\n", SL[i]);
  }    
  printf("\n");
  for (int i = 0; i < C; i++) {
     printf("%d\t", SC[i]);
  }
  
}