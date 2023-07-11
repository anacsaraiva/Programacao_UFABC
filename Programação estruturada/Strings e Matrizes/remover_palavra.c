/* Implemente uma função que receba uma string (vetor de caracteres) contendo uma frase e remova a palavra de índice i do vetor passado no parâmetro frase da função. 
Considere que a primeira palavra tem índice 1. Ao remover uma palavra, é necessário remover caracteres espaço adjacentes à palavra removida. 
A string de entrada possui no máximo 100 caracteres e pode conter pontuação.

Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts e não use string.h.*/

//#include "remover_palavra.h"

void remover_palavra(int i, char frase[]) {
    
    int j = 0, cont = 1, inicio = 0, fim = 0, tam = 0;
    
    while (frase[tam]  != '\0'){
        tam++;
    }
    
    while (frase[j]  != '\0'){
        
        if(frase[j] == ' ' ){
            cont++;
            
            if (cont == i && i != 1){
                inicio = j;
    
            }
            if(cont == i+1){
                fim = j;
            }
        }
    j++;    
    }
    if (fim == 0){
        fim = tam-1;
    }
    
    if(frase[inicio] == ',' || frase[inicio] == ':'){
    inicio++;
    }
    if(frase[fim-1] == ',' || frase[fim-1] == ':'){
    fim--;
    }
    if(i == 1){
      fim++;
    }
 
    for(int f = inicio; f < tam; f++){
        frase[f] = frase[fim];
        fim++;
    }
}