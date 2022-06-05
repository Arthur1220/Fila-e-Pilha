#ifndef PilhaCircular_H
#define PilhaCircular_H

typedef struct No{
    int info;
    struct No *next;
    struct No *previous;
}No;

typedef struct{
    No *inicio;
    No *fim;
    int tam;
}Raiz;

//
void Inicializacao(Raiz *lista);

//
void push(Raiz *lista, int valor);

//
int pop(Raiz *lista);

//
int empty(Raiz *lista);

#endif //PilhaCircular_H