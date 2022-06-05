#include <stdio.h>
#include <stdlib.h>
#include "FilaSimples.h"

void Imprimir(Raiz *lista)
{
    system("cls");
    No *inicio = lista->inicio;

    printf("Tamanho da lista: %d\n\n", lista->tam);

    printf("[ ");
    while(inicio != NULL)
    {
        printf("%d  ", inicio->info);
        inicio = inicio->next;
    }
    printf("]\n");   

    printf("\n");
    system("pause");
}

int main(){
    int option = 0, valor; 

    Raiz lista;
    Inicializacao(&lista);

    while (option != 6){
        system("cls");
        printf("    FILA - LISTA ENCADEADA SIMPLES\n");
        printf("1-> Empilhar\n2-> Imprimir lista\n3-> Desempilhar \n5-> Verificar se esta vazia\n6-> SAIR\n\n-> ");
        scanf("%d", &option);

        switch (option){
        case 1:
            system("cls");
            printf("Insira o valor a ser inserido: ");
            scanf("%d", &valor);
            enqueue(&lista, valor);
            break;

        case 2:
            Imprimir(&lista);
            break;

        case 3:
            valor = dequeue(&lista);
            if(valor == -1){
                system("cls");
                printf("A pilha esta vazia, impossivel remover!\n");
                system("pause");
            }else{
                system("cls");
                printf("Valor removido: %d\n", valor);
                system("pause");
            }
            break;

        case 5:
            if(empty(&lista)){
                system("cls");
                printf("Lista vazia!\n");
                system("pause");
            }else{
                system("cls");
                printf("A lista possui elementos!\n");
                system("pause");
            }

            break;

        case 6:
            system("cls");
            printf("Saindo...\n");
            break;
        
        default:
            break;
        }
    }

    return 0;
}