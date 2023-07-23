/*
Criar um programa que armazena diversos nomes 
em um vetor de strings (matriz de char) e depois 
os imprime em ordem alfabética e cada um em uma linha.
*/

#include<stdio.h>
#include<string.h>

#define QUANT_DE_PALAVRAS 3
#define MAX_DE_CARACTERES 10

int main() {

  char entradas[QUANT_DE_PALAVRAS][MAX_DE_CARACTERES];
  char ordemAlfabetica[QUANT_DE_PALAVRAS][MAX_DE_CARACTERES];

  for (int i = 0; i < QUANT_DE_PALAVRAS; i++){
      printf("Digite um nome: ");
      fgets(entradas[i], MAX_DE_CARACTERES, stdin);
  }
  //ordem alfabética
  for (int i = 0; i < QUANT_DE_PALAVRAS; i++){
        for (int j = i; j < QUANT_DE_PALAVRAS; j++){
            if (strcmp(entradas[i], entradas[j]) > 0){
                char temporaria[MAX_DE_CARACTERES];
                strcpy(temporaria, entradas[j]);
                strcpy(entradas[j], entradas[i]);
                strcpy(entradas[i], temporaria);
            }
        }
    }
  //print vetor em ordem
  for (int i = 0; i < QUANT_DE_PALAVRAS; i++){
      printf("nome: %s",entradas[i]);
  }

  return 1;
}
