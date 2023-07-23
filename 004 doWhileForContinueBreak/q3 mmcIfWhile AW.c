/*
Faça um programa que calcule a média de n números 
informados pelo usuário  até  ele  informar  o  
número  0.  Por  exemplo,  se  o  usuário 
informar os números 9 6 2 8 0, o programa
deve calcular a média (9 + 6 + 2 + 8) / 4.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR_FOR_QUESTION 20

void main (){

  int numero1;
  int numero2;
  int maior;
  int menor;

  char str[MAX_CHAR_FOR_QUESTION];
  
  printf("Digite um numero: ");
  fgets(str, 10, stdin);
  numero1 = atoi(str);
  printf("Digite um numero: ");
  fgets(str, 10, stdin);
  numero2 = atoi(str);

  if (numero1 > numero2){
    maior = numero1;
    menor = numero2;
  }
  if (numero2 > numero1){
    maior = numero2;
    menor = numero1;
  }

  int mmc = maior;

  while (1){
    if (mmc % numero1 == 0 && mmc % numero2 == 0)
      break;
    else
     mmc++;
  }
  printf("O mmc é %d\n",mmc);

}
