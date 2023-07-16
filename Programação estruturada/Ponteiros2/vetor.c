/* Escreva a função duplica_impares, que recebe um vetor de inteiros (v) de comprimento n_entrada e retorna outro vetor com todos os números ímpares duplicados. A função também retorna (por referência) a quantidade de elementos no vetor retornado (n_retorno). Observação: a função deve retornar um novo vetor e não alterar o vetor de entrada (v).

Protótipo da função:

int* duplica_impares(int *v, int n_entrada, int *n_retorno);

Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.*/

#include "vetor.h"
#include <stdlib.h>

int *duplica_impares(int *v, int n_entrada, int *n_retorno) {
    
    int j = 0;
    int *vetor = malloc(sizeof(int)*(n_entrada*2));
    
    for(int i = 0; i < n_entrada; i++){
        
        if(v[i]%2 == 1){
            vetor[j] = v[i];
            j++;
            vetor[j] = v[i];
            j++;
        }else{
            vetor[j] = v[i];
            j++;
        }
        
    }
        
    *n_retorno = j;
    
    return vetor;
    
}