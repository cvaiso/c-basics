/*
Criar um programa que solicita uma string e 
verifica se ela é um palíndromo ou não. Um 
palíndromo é uma string que, quando invertida, 
se mantém igual a original. Por exemplo: arara.
*/

#include<stdio.h>
#include<string.h>


void main() {
  
  char s[50];
  int t = 0, palindromo = 1;
  printf("Digite uma palavra: ");
  scanf("%s", s);

  for (int i = 0, f = strlen(s)-1; i < f; i++, f--) {
      if (s[i] != s[f]) {
        palindromo = 0;
        break; 
      }
  }

  if (palindromo)
    printf("%s eh palindromo", s);
  else  
    printf("%s nao eh palindromo", s);
}