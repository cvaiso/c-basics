/*
Digite 10 números em um vetor e no final 
imprima a média, o maior e o menor número.
*/

#include<stdio.h>


int main() {
  
  float x[10], maior, menor, media = 0;

    printf("Digite o 1o inteiro: ");
    scanf("%f", &x[0]);
    media += maior = menor = x[0];

  for (int i = 1; i < 10; i++) {
      printf("Digite o %do inteiro: ", i+1);
      scanf("%f", &x[i]);
      media += x[i];
      if (x[i] > maior) maior = x[i];
      if (x[i] < menor) menor = x[i];
  }

  printf("\nMedia = %.2f\nMaior = %.2f\nMenor = %.2f\n", 
    media/10, maior, menor);
  
  return 1;

}
