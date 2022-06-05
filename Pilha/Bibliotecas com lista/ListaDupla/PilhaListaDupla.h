#ifndef PilhaListaDupla_H
#define PilhaListaDupla_H

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

//A função adiciona um no na lista encadeada simples
void push(Raiz *lista, int valor);

//A função retira o ultimo no na lista encadeada simples
int pop(Raiz *lista);

//A função verifica se possui termos armazenados
int empty(Raiz *lista);

#endif //PilhaListaDupla_H