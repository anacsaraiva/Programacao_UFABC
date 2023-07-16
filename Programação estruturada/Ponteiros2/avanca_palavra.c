/* Cria uma função que procura um trecho de texto na frase e cria uma nova string com todo o conteúdo da frase a partir do trecho indicado. 
Por exemplo, para frase="Frase de teste." e trecho="de", a função deve criar uma nova string "de teste.". 
A função deve retornar NULL se não encontrar o trecho na frase. A função deve retornar uma nova string e não deve alterar o vetor com a frase passada para a função.

A função deve ter o seguinte protótipo:

char* avanca_palavra(char *frase, char *trecho)


Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. 
Não use printf/puts/fscanf/fprintf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.*/

#include <stdlib.h>


char *avanca_palavra(char *frase, char *trecho) {
    
    int cont = 0,cont2 = 0, f = 0,i,ok=0;
    int inicio;
    
    while(frase[cont] != '\0'){
        cont++;
    }
    
    while(trecho[cont2] != '\0'){
        cont2++;
    }
    
    for(i = 0; i < cont;i++){
        
        if(frase[i] == trecho[f]){
            if(frase[i+1] != trecho[f+1]){
                continue;
            }else{
                ok++;
                int j = i;
                int b = i;
                
                while(trecho[f] != '\0'){
                    
                    int a = 0;
                    do{
                        
                        if(frase[b] == '\0' && trecho[a] != '\0'){
                        return NULL;
                        }
                        b++;
                        a++;
                    }while(trecho[a] != '\0');
                    
                    if(trecho[f] != frase[j]){
                        return NULL;
                    }else{
                        
                        char *nova_frase = malloc(sizeof(char) * (cont - i + 1));
                        int l;
                        for (l = i; l < cont; l++) {
                            nova_frase[l-i] = frase[l];
                        }

                        nova_frase[l-i] = '\0';
                        return nova_frase;
                        free(nova_frase);
                    }
                    f++;
                    j++;
                }

            }
        }else{
            
            if(i == cont-1 && ok == 0){
                return NULL;
            }
        }

    }
    

    
}