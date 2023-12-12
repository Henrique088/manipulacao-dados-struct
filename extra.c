#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "extra.h"

void criarLista (Lista *lista) {

lista -> primeiro = NULL;
lista -> ultimo = NULL;

}

int estaVazia(Lista *lista) {

return (lista->primeiro== NULL);

}

void mostrarLista (Lista *lista){
Celula *celula;

for (celula = lista -> primeiro; celula != NULL; celula = celula->proximo) {

printf("%d\t", celula->numero);

}
printf("\n");

}

void removerInicio (Lista *lista){

Celula *aux = lista -> primeiro;
lista -> primeiro = lista -> primeiro -> proximo;
free(aux);

}

void inserirOrdenado (Lista *lista, int valor){

Celula *celula, *celulaAtual, *celulaAnterior;
celula = (Celula*) malloc (sizeof (Celula));
celula -> numero = valor;
celulaAnterior = NULL;
celulaAtual = lista -> primeiro;
while ( celulaAtual != NULL && celulaAtual->numero <= valor){

celulaAnterior = celulaAtual;
celulaAtual = celulaAtual -> proximo;

}
if (celulaAtual != NULL){

celula -> proximo = celulaAtual;

} else {

celula -> proximo = NULL;

}
if(lista->primeiro==NULL){
    lista->primeiro = celula;
}
else{
celulaAnterior -> proximo = celula;

}
}




void copia(Lista *lista, Lista *lista_02){
    Celula *celula;
    Celula *celula_02;
   
    for(celula =lista->primeiro;celula!=NULL;celula=celula->proximo){
       
        inserirOrdenado(lista_02, celula->numero);
      
    }
  
    for (celula_02 = lista_02 -> primeiro; celula_02 != NULL; celula_02 = celula_02->proximo) {

            printf("%d\t", celula_02->numero);

}
printf("\n");

}

void intercala(Lista *lista, Lista *lista_02, Lista *lista_03){
    Celula *celula;
    Celula *celula_02;
    Celula *celula_03;
    
    for(celula =lista->primeiro,celula_02 = lista_02->primeiro;celula!=NULL;celula=celula->proximo, celula_02=celula_02->proximo){
       
        inserirOrdenado(lista_03, celula->numero);
        inserirOrdenado(lista_03, celula_02->numero);
      
    }
    
    for (celula_03 = lista_03 -> primeiro; celula_03 != NULL; celula_03 = celula_03->proximo) {

            printf("%d\t", celula_03->numero);

}
printf("\n");

}

void concatena(Lista *lista, Lista *lista_02, Lista *lista_04){
    Celula *celula;
    Celula *celula_02;
    Celula *celula_04;
    
    for(celula =lista->primeiro;celula!=NULL;celula=celula->proximo){
       
        inserirOrdenado(lista_04, celula->numero);
      
    }
    
    
    insereFim(lista_02, lista_04);
    
    mostrarLista(lista_04);
  
}
void insereFim(Lista *lista_02, Lista *lista_04){
    Celula *celula_04;
    Celula *celula_02;
    Celula *celula;
    
    for(celula_02 =lista_02->primeiro;celula_02!=NULL;celula_02=celula_02->proximo){
           
        for(celula_04 =lista_04->primeiro;celula_04!=NULL;celula_04=celula_04->proximo){
            
            
            if(celula_04->proximo==NULL){
               celula = (Celula*) malloc (sizeof (Celula));
               celula->numero = celula_02->numero;
               celula_04->proximo =celula;
               break;
            }
        
        }
        
      
    }
    
    
}





