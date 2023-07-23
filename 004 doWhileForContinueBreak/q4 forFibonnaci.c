/*
A série de Fibonacci inicia com os números 0 e 1 
e os demais termos são definidos pela soma dos 
dois anteriores. Crie um programa que solicita 
do usuário a posição de um termo (int) e calcule 
qual é este termo. 
Fibonacci: 0 1 1 2 3 5 8 13 21 ...
Por exemplo, se o usuário informar 7 (sétimo termo), 
a resposta é 8.
*/

#include<stdio.h>

int main() {

    int t, p = 0, s = 1, f = 0;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &t);

    for (int i = 1; i < t; i++) {
        f = p + s;
        p = s;
        s = f;
    }
    
    printf("O %do elemento da seria de Fibonacci eh %d.\n", t, p);

    return 1;
}
