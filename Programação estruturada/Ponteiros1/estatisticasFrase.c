/* Escreva uma função que recebe uma frase e retorne o valor de algumas estatísticas sobre os comprimentos das palavras na frase. 
O retorno será realizado por parâmetros passados por referência. As frases podem conter pontuação.

Protótipo da função:
void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio);
Valores que devem ser retornados:

min: comprimento da menor palavra
max: comprimento da maior palavra
soma: soma dos comprimentos de todas as palavras
media: média dos comprimentos das palavras
desvio: desvio padrão (std) dos comprimentos das palavras*/

#include "frase.h"
#include <math.h>

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {
    
    int n = 0,i=0;
    
    int v[100];
    int cont = -1 ;
    int cont2 =0;
    
    do{
        cont++;
        
        if(frase[cont] == ' ' || frase[cont] == ',' || frase[cont] == ':' || frase[cont] == '\0' || frase[cont] == '.' && n > 0){
            if(n != 0){
            v[i] = n;
            i++;
            n = 0;
                
            }
        }else{
            n++;
        }
        
    }while(frase[cont] != '\0');
    
    *min = v[0];
    *max= v[0];
    *soma =0;
    
    for(int j = 0; j < i; j++){
        
        *soma += v[j];
        
        if(v[j] < *min)
            *min = v[j];
        
        if(v[j]> *max)
            *max = v[j];
    }
    
    *media = *soma/(double)i;
    
    double s2 = 0;
    
    for(int j = 0; j < i; j++){
        
        s2 += (v[j] - *media)*(v[j] - *media);
        
    }
    *desvio = sqrt(s2/i);
    
    
    

}