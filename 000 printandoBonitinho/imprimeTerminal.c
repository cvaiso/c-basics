#ifndef MENU_DEF
#define MENU_DEF

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_HORIZONTAL_TELA 50

#if defined(_WIN32) || defined(_WIN64)
    #define CLEAR_SCREEN "cls"
#elif defined(__APPLE__)
    #define CLEAR_SCREEN "clear"
#elif defined(__unix__)
    #define CLEAR_SCREEN "clear"
#else
    #define CLEAR_SCREEN ""  // No clear screen command defined for other operating systems
#endif

void imprime_linha();
void imprime_cabecalho();


void imprime_linha(){

    printf("I");
    for(int i = 0; i < TAM_HORIZONTAL_TELA; i++)
      printf("-");
    printf("I\n\n");

}
void imprime_cabecalho() {
  
    char str[] = "        .---------.     \n"
                 "        |.-------.|     \n"
                 "        ||>run#  ||     "
                 "        |github.com/cvaiso     \n" 
                 "        ||       ||     "
                 "        |Caio Augusto Reis     \n"
                 "        |\"-------'|     \n"
                 "      .-^---------^-.   \n"
                 "      | ---~  CVAISO|   \n"
                 "      \"-------------'   \n";
                 


    system(CLEAR_SCREEN);
    imprime_linha();
    printf("%s\n", str);
    imprime_linha();
    char str2[] = "versao 0.0 menus e doc em desenvolvimento";
    printf("%50s\n",str2);
    imprime_linha();
}
#endif
