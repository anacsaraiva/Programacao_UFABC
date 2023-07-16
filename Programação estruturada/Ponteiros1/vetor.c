/* Escreva uma função que recebe um vetor de inteiros de comprimento n e retorne o valor de algumas estatísticas sobre esses números. 
O retorno será realizado por parâmetros passados por referência.

Protótipo da função:
void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio);
Valores que devem ser retornados:

min: menor valor
max: maior valor
soma: soma dos valores
media: média dos valores
desvio: desvio padrão (std) dos valores*/

#include "vetor.h"
#include <math.h>

void estatisticas_vetor(int v[], int n, int *min, int *max, int *soma, double *media, double *desvio){
    
    *min = v[0];
    *max= v[0];
    *soma =0;
    
    for(int i = 0; i < n; i++){
        
        *soma += v[i];
        
        if(v[i] < *min)
            *min = v[i];
        
        if(v[i]> *max)
            *max = v[i];
    }
    
    *media = *soma/(double)n;
    
    double s2 = 0;
    
    for(int i = 0; i < n; i++){
        
        s2 += (v[i] - *media)*(v[i] - *media);
        
    }
    *desvio = sqrt(s2/n);
    
    
}