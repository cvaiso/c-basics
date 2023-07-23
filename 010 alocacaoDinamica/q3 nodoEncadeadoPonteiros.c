/*
Crie um registro chamado Nodo, que contém um inteiro 
e um ponteiro para outro Nodo. Faça um programa em 
que o usuário é capaz de escolher entre:
1) criar um nodo; 2) apagar um nodo; 3) imprimir os 
valores de todos os nodos; 4) sair do programa. 
O programa deve iniciar com uma variável
cujo tipo é um ponteiro para um Nodo. Essa variável 
inicia apontando
para NULL. Ao criar o primeiro Nodo, essa variável 
deve apontar para
ele. Cada Nodo, a partir do primeiro, aponta para 
o Nodo seguinte. Ao
apagar um Nodo, o Nodo anterior passa a apontar 
para o Nodo seguinte ao
que foi apagado. Organize o programa em funções 
separadas para impressão
de um nodo, impressão de todos nodos, inclusão e 
exclusão de um Nodo.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct _nodo {
    int valor;
    struct _nodo *proximo;
} nodo;

nodo* incluir(nodo*, int);
nodo* excluir(nodo*, int);
void imprimirNodo(nodo*);
void imprimirTodos(nodo*);
void main();

nodo* incluir(nodo* inicio, int v) {
    nodo *novo = (nodo*) malloc(sizeof(nodo));
    novo->valor = v;
    novo->proximo = inicio;
    inicio = novo;
    return inicio;
}
/*
&1 inicio &2
&2 [valor=3|proximo=NULL]
&3 v 5
&4 [valor=5|proximo=&2]
&5 
*/

nodo* excluir(nodo* inicio, int v) {
    if (inicio == NULL)
        return inicio;

    else if (inicio->valor == v) {
        nodo *aExcluir = inicio;
        inicio = inicio->proximo;
        free(aExcluir);
        aExcluir = NULL;
    }

    else {
        nodo *atual = inicio;
        while(atual->proximo != NULL) {
            if (atual->proximo->valor == v) 
                break;
            atual = atual->proximo;     
        }
        if (atual->proximo != NULL) {
            nodo *aExcluir = atual->proximo;
            atual->proximo = atual->proximo->proximo;
            free(aExcluir);
            aExcluir = NULL;
        } 
        atual = NULL;  
    }
    return inicio;
}

void imprimirNodo(nodo *n) {
    printf(" [%d] ", n->valor);
}

void imprimirTodos(nodo* inicio) {
    nodo *atual = inicio;
    printf("\n");
    while (atual != NULL) {
        imprimirNodo(atual);
        printf("->");
        atual = atual->proximo;
    }
    printf("FIM\n");
    atual = NULL;
}


void main() {

    nodo *inicio = NULL;
    int op, v;
    do {
        printf("\n\n0 SAIR\n1 INCLUIR\n2 EXCLUIR\n3 VISUALIZAR");
        printf("\nDigite a sua opcao: ");
        scanf("%d", &op);
        switch(op) {
            case 1: 
            printf("Digite um inteiro: ");
            scanf("%d", &v);
            inicio = incluir(inicio,v);
            break;

            case 2:
            printf("Digite um inteiro: ");
            scanf("%d", &v);
            inicio = excluir(inicio,v);
            break;

            case 3:
            imprimirTodos(inicio);
        }
    } while (op);

}

//INICIO->[7]->[8]->[2]->[3]->[5]->[1]->[10]->NULL

