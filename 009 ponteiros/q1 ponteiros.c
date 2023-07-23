/*
Implemente um programa que que solicita dois números 
e calcula a soma entre eles. Neste programa, para 
cada variável que você necessitar declarar, você 
deve depois criar um ponteiro para ela e acessá-la somente
por meio dos ponteiros.
*/

#include<stdio.h>

void main() {
    int a, b, i, s = 0, *pa=&a, *pb=&b, *pi=&i, *ps=&s;
    printf("Digite dois inteiros: ");
    scanf("%d %d", pa, pb);

    if (*pa > *pb) {
        int aux = *pa;
        *pa = *pb;
        *pb = aux;
    }

    for (*pi = *pa; *pi <= *pb; (*pi)++ ) {
        *ps += *pi;
    }
 
    printf("A soma entre os numeros %d e %d eh: %d\n",
        *pa, *pb, *ps);

}