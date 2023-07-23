/*
Faça um programa que solicite do usuário o tamanho do 
vetor a ser lido, faça a alocação dinâmica desse vetor 
com o tipo char e solicite que o usuário digite uma string. 
Por fim, imprima a string digitada.
*/

#include<stdio.h>
#include<stdlib.h>

void main() {
    
    int t;
    printf("Informe o tamanho da string: ");
    scanf("%d", &t);

    char *str = (char*) calloc(t, sizeof(char));
    printf("Digite a string: ");
    fflush(stdin);
    fgets(str, t, stdin);
    printf("\n%s\n", str);
    free(str);
    str = NULL;
}
