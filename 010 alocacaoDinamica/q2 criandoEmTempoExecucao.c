/*
Crie o tipo Aluno com nome (char*) e RA (int). 
Crie um programa que utiliza o tipo Aluno e permite, 
por meio de um menu de opções iterativo,
incluir e visualizar alunos em um vetor, 
bem como sair do programa.
*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 10
typedef struct _aluno {
    char* nome;
    int ra;
} aluno;

void main() {
    aluno a[TAM];
    int op, qa = 0;
    do {
        printf("\n\n0 SAIR\n1 CADASTRAR\n2 VISUALIZAR");
        printf("\nDigite a sua opcao: ");
        scanf("%d", &op);
        switch(op) {
            case 1: 
            a[qa].nome = (char*) malloc(20*sizeof(char));
            printf("Digite o nome do aluno: ");
            scanf(" %s", a[qa].nome);
            printf("Digite a matricula do aluno: ");
            scanf("%d", a[qa].ra);
            qa++;
            break;

            case 2:
            for(int i = 0; i < qa; i++) {
                printf("\nNome do aluno: %s", a[i].nome);
                printf("\nMatricula do aluno: %d", a[i].ra); 
            }
        }
    } while (op);
}