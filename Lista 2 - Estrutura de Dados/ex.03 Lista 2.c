#include <stdio.h>

void remover(no** head) {
    if (*head == NULL) {
        return;
    }

    no* atual = *head;
    no* anterior = NULL;

    while (atual != NULL) {
        if (atual->dado % 2 == 0) {
            if (anterior == NULL) {
            *head = atual->prox;
            free(atual);
            atual = *head;
            } else {    
                anterior->prox = atual->prox;
                free(atual);
                atual = anterior->prox;
            }
        } else {
            anterior = atual;
            atual = atual->prox;
        }
    }
}
