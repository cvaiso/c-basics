/*
4.	Crie um registro Acessorio com nome e valor. 
Crie um registro Carro com nome, valor e um array 
de acessórios. Implemente um programa que permite 
o usuário configurar diversos carros até escolher 
sair. Para cada carro, o usuário informa o nome e 
os acessórios (nome e valor de cada um, podendo 
ser quantos o usuário quiser, respeitando o limite 
do array). Após o cadastro de um carro, o programa 
imprime os dados dele, dos acessórios incluídos e 
o valor total (soma do valor do carro com os valores 
dos acessórios incluídos nele).
*/
#include<stdio.h>
#define QT_MAX_CARROS 2
#define QT_MAX_ACESSORIOS 5

typedef struct _acessorio {
  char nome[20];
  float valor;
} acessorio;

typedef struct _carro {
  char nome[20];
  float valor;
  acessorio ac[QT_MAX_ACESSORIOS];
} carro;

void main() {

    int op, qc = 0, qa, qv;
    float total;
    carro c[QT_MAX_CARROS];
    while(1) {
        printf("\n\n0 SAIR\n1 CADASTRAR CARRO\n2IMPRIMIR\nDigite a opcao: ");
        scanf("%d", &op);
        switch (op) {

            case 0: 
                break;

            case 1:
                if (qc >= QT_MAX_CARROS) {
                    printf("Quantidade maxima de carros atingida.\n");
                    break;
                }
                printf("Digite o nome do carro: ");
                scanf(" %s", c[qc].nome);
                printf("Digite o valor do carro: ");
                scanf("%f", &c[qc].valor);
                printf("Quantos acessorios o carro tem? ");
                scanf("%d", &qa);
                for (int i = 0; i < qa; i++) {
                    printf("Digite o nome do acessorio: ");
                    scanf(" %s", c[qc].ac[i].nome);
                    printf("Digite o valor do acessorio: ");
                    scanf("%f", &c[qc].ac[i].valor);
                    
                }
                qc++;
                break;

            case 2:  
                printf("Qual carro deseja ver (1 a %d)? ", qc);
                scanf("%d", &qv);                
                printf("\n\nNome do carro: %s", c[qv-1].nome);
                printf("\nValor do carro: %.2f", c[qv-1].valor);
                printf("\nAcessorios:\n");                    
                total = c[qv-1].valor;
                for (int i = 0; i < qa; i++) {
                    printf("\nNome: %s", c[qv-1].ac[i].nome);
                    printf("\nValor: %.2f", c[qv-1].ac[i].valor);
                    total += c[qv-1].ac[i].valor;
                }
                printf("\nTOTAL: %.2f", total);                
                
        }
        if (!op) break;
    }
}