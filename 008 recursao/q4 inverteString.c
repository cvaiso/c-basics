/*
4.	Crie uma função que recursiva que recebe 
uma string e a inverte. Crie o programa que 
solicita uma string, utiliza a função criada 
e a imprime invertida.
*/
#include<stdio.h>

int tamanho(char s[]) {
    if (s[0] == '\0') return 0;
    return 1 + tamanho(&s[1]); 
}
//essa versão (feita em aula) armazena a string invertida em outro array
void inverteaux(char str[], char inv[], int t) {
    if (t == 0) {
        inv[0] = '\0';
        return;
    }
    inv[0] = str[t-1];
    inverteaux(str,&inv[1],t-1);
}
void inverte(char str[], char inv[]) {
     return inverteaux(str,inv,tamanho(str));
}
///////////////////////////////

//essa versão inverte a string original
void inverte2Aux(char str[], int i, int f) {
    if (i >= f) return;
    char aux = str[i];
    str[i] = str[f];
    str[f] = aux;
    inverteAux(str, i+1, f-1);
}
void inverte2(char str[]) {
    inverteAux(str, 0, tamanho(str)-1);
}
//////////////////////////////////////

void main() {
    char s[20],i[20];
    printf("Digite uma string: ");
    scanf(" %s", s);
    inverte(s,i);
    printf("o inverso de %s eh %s.\n",s,i);
}