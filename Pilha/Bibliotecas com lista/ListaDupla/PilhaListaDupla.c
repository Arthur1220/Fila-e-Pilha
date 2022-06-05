#include <stdio.h>
#include <stdlib.h>
#include "PilhaListaDupla.h"

void Inicializacao(Raiz *lista);
void push(Raiz *lista, int valor);
int pop(Raiz *lista);
int empty(Raiz *lista);

void Inicializacao(Raiz *lista)
{
    lista->inicio = NULL;
    lista->tam = 0;
}

void push(Raiz *lista, int valor)
{
    No *novo = (No*)malloc(sizeof(No));
    novo->info = valor;
    novo->previous = NULL;
    novo->next = lista->inicio;
    if(lista->inicio != NULL)
        lista->inicio->previous = novo;
    lista->inicio = novo;
    lista->tam++;
}

int pop(Raiz *lista)
{
    if(empty(lista) == 0)
        return -1;
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
        lista->inicio->previous == NULL;
        
        return valor;
    }
}

int empty(Raiz *lista)
{
    if(lista->tam == 0)
        return 0;
    else
        return 1;
}