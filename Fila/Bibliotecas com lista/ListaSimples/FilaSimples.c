#include <stdio.h>
#include <stdlib.h>
#include "FilaSimples.h"

void Inicializacao(Raiz *lista);
void enqueue(Raiz *lista, int valor);
int dequeue(Raiz *lista);
int empty(Raiz *lista);

void Inicializacao(Raiz *lista)
{
    lista->inicio = NULL;
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
    }
    else
    {
        No *aux = lista->inicio;

        while(aux->next != NULL)
            aux = aux->next;
        
        novo->next = NULL;
        aux->next = novo;
    }

    lista->tam++;
}

int dequeue(Raiz *lista){
    if(empty(lista))
        return -1;
    else
    {
        int valor;

        if(lista->inicio->next == NULL)
        {
            valor = lista->inicio->info;
            lista->inicio = NULL;
            lista->tam--;

            return valor;
        }
        else
        {
            No *inicio = lista->inicio;
            No *noARemover = NULL;
            int valor;

            noARemover = lista->inicio;
            valor = inicio->info;
            lista->inicio = noARemover->next;
            free(noARemover);
            lista->tam--;
            
            return valor;
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