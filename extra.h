#ifndef extra_H
#define extra_H

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

typedef struct celula Celula;
struct celula {

int numero;
Celula *proximo;

};

typedef struct lista{

Celula *primeiro;
Celula *ultimo;

}Lista;


void criarLista (Lista *lista);
int estaVazia(Lista *lista);
void mostrarLista (Lista *lista);
void removerInicio (Lista *lista);
void inserirOrdenado (Lista *lista, int valor);

void copia(Lista *lista, Lista *lista_02);
void intercala(Lista *lista, Lista *lista_02, Lista *lista_03);
void concatena(Lista *lista, Lista *lista_02, Lista *lista_04);
void insereFim(Lista *lista, Lista *lista_02);
#endif /* extra_H */
