/*
Crie um registro Carro com nome e valor. Crie um 
programa que cadastra 5 carros em um array com 
dados do usuário e no final imprime o mais
caro. O acesso a cada elemento do array deve 
sempre ser feito por meio de um ponteiro.
*/

#include<stdio.h>

typedef struct _carro {
    char nome[20];
    float valor;
} carro;

void main() {

    carro c[5], *pc, *pcmc=c;

    for (int i = 0; i < 5; i++) {
        pc = &c[i];
        printf("Digite o nome do %do carro: ", i+1);
        scanf(" %s", pc->nome);
        printf("Digite o valor do %do carro: ", i+1);
        scanf("%f", &pc->valor);
        if (pc->valor > pcmc->valor) pcmc = pc; 
    }
    printf("\nNome do carro mais caro: %s", pcmc->nome);
    printf("\nValor do carro mais caro: %.2f", pcmc->valor);
        
}