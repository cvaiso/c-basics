/*
Fazer  um  programa  que  solicite  3 inteiros  
e  os  imprime  em  ordem crescente.
*/

#include<stdio.h>

void main() {

    int a, b, c;
    printf("Informe 3 inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        printf("\n%d", a);
        if (b <= c) printf("\t%d\t%d\n", b, c);
        else        printf("\t%d\t%d\n", c, b);
    }

    else if (b <= a && b <= c) {
        printf("\n%d", b);
        if (a <= c) printf("\t%d\t%d\n", a, c);
        else        printf("\t%d\t%d\n", c, a);
    }

    else if (c <= b && c <= a) {
        printf("\n%d", c);
        if (b <= a) printf("\t%d\t%d\n", b, a);
        else        printf("\t%d\t%d\n", a, b);
    }


}
