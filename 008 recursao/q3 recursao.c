/*
3.	Crie uma função recursiva que recebe uma string 
e retorna o seu tamanho. Crie uma função recursiva 
que recebe uma string e um caractere e retorna 1 
caso ele exista na string ou 0, caso contrário. 
Crie um programa que solicite uma string e um 
caractere e utilize as duas funções.
*/
#include<stdio.h>

int tamanho(char s[]) {
    if (s[0] == '\0') return 0;
    return 1 + tamanho(&s[1]); 
}

int contem(char s[], char c) {
    if (s[0] == c) return 1;
    if (s[0] == '\0') return 0;
    return contem(&s[1],c);
}

//funcao brinde: nao esta na questao
int indiceaux(char s[], char c, int i) {
    if (s[i] == c) return i;
    if (s[i] == '\0') return -1;
    return indiceaux(s,c,i+1);
}
int indice(char s[], char c) {
    return indiceaux(s,c,0);
}



void main() {
    char s[20], c;
    printf("Digite uma string: ");
    scanf(" %s", s);
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    int t = tamanho(s);
    printf("%s possui %d caracteres.\n",s,t);

    if (contem(s,c))
        printf("%s possui o caractere %c na posicao %d.\n",
            s,c, indice(s,c));
    else
        printf("%s nao possui o caractere %c.\n",s,c);
}