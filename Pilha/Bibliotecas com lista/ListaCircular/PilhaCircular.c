#include <stdio.h>
#include <stdlib.h>
#include "PilhaCircular.h"

void Inicializacao(Raiz *lista);
void push(Raiz *lista, int valor);
int pop(Raiz *lista);
int empty(Raiz *lista);

void Inicializacao(Raiz *lista)
{
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
}

void push(Raiz *lista, int valor)
{
    No *novo = (No*)malloc(sizeof(No));
    novo->info = valor;
    novo->next = lista->inicio;
    if(lista->inicio != NULL)
        lista->inicio->previous = novo;

    lista->inicio = novo;
    if(lista->fim == NULL)
        lista->fim = novo;

    lista->fim->next = lista->inicio;
    lista->tam++;
}

int pop(Raiz *lista)
{
    if(empty(lista))
        return -1;
    else
    {
        int valor;
        
        if(lista->inicio == lista->fim)
        {
            valor = lista->inicio->info;
            lista->inicio = NULL;
            lista->fim = NULL;
            lista->tam--;
        }
        else
        {
            No *inicio = lista->inicio;
            No *noARemover = NULL;

            valor = lista->inicio->info;
            noARemover = lista->inicio;
            lista->inicio = noARemover->next;
            lista->fim->next = lista->inicio;
            lista->tam--;
        }
        
        return valor;
    }
}

int empty(Raiz *lista)
{
    if(lista->tam == 0)
        return 1;
    else
        return 0;
}