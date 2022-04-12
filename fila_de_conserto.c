/*===========================================
  Gabriel Alves Mazzuco - 2 Ano
  Ciências da Computação - UNIOESTE
  Estrutura de Dados
  ===========================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila_encadeada.h"

Fila *fila;   //Cria a fila com a biblioteca criada

int main(void){
    int op; //Inteiro respectivo para o controle do switch
    Info f_temp;    //Cadastro temporario que sera lido na função de leitura

    introducao();   //Mostra uma pequena introducao

    clear_screen();
    fila = cria(); //Cria a fila para ser manipulada

    do{
        printf("Determine a sua escolha:\n\n");
        printf("1 - Inserir\n");
        printf("2 - Retira\n");
        printf("3 - Limpa a fila\n");
        printf("4 - Imprimir a fila\n");
        printf("5 - Sair do programa\n\n");
        printf("OP = "); scanf("%d", &op);

        clear_screen();

        switch(op){
            case(1):
                f_temp = leitura(); //Chama a função de leitura temporaria e armaneza
                clear_screen();
                insere(fila, f_temp);   //Insere a função
                break;
            
            case(2):
                retira(fila);
                printf("Primeira posição da fila foi retirada e encadeada novamente\n");
                limpa_buffer();
                stop();
                clear_screen();
                break;

            case(3):
                limpa(fila);
                printf("Limpeza da fila foi feita\n");
                limpa_buffer();
                stop();
                clear_screen();
                break;
            
            case(4):
                imprime(fila);
                break;
            
            case(5):
                printf("Programa finalizado\n\n\n");
                exit(0);
                break;
        }

    }while(op != 5);

    printf("\n");
    stop();
    clear_screen();
    return 0;
}
