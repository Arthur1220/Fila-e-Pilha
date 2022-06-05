#include <stdio.h>
#include <stdlib.h>
#include "FilaCircular.h"

void Inicializacao(Raiz *lista);
void enqueue(Raiz *lista, int valor);
int dequeue(Raiz *lista);
int empty(Raiz *lista);

void Inicializacao(Raiz *lista)
{
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
}

void enqueue(Raiz *lista, int valor)
{
    No *novo = (No*)malloc(sizeof(No));
    novo->info = valor;
    novo->next = NULL;

    if(lista->inicio == NULL)
    {
        lista->inicio = novo; 
        lista->fim = novo;
    }
    else
    {
        novo->previus = lista->fim;
        lista->fim->next = novo;
        lista->fim = novo;
    }

    lista->tam++;
}

int dequeue(Raiz *lista){
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
            if(lista->inicio == NULL)
                lista->fim == NULL;

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