#ifndef FilaListaDupla_H
#define FilaListaDupla_H

typedef struct No{
    int info;
    struct No *next;
    struct No *previous;
}No;

typedef struct{
    No *inicio;
    int tam;
}Raiz;

//
void Inicializacao(Raiz *lista);

//
void enqueue(Raiz *lista, int valor);

//
int dequeue(Raiz *lista);

//
int empty(Raiz *lista);

#endif //FilaListaDupla_H