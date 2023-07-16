/* Escreva um programa que leia dois vetores de inteiros. Assuma que os dois vetores estão ordenados em ordem crescente. Depois, o programa deve imprimir todos os números lidos em ordem crescente, intercalando os valores dos dois vetores. Por exemplo, se os vetores lidos forem [1, 5, 8, 12, 90] e [2, 5, 7, 46], o programa deverá imprimir 1, 2, 5, 5, 7, 8, 12, 46, 90.



Entrada:

n1 (quantidade de elementos no vetor 1)
elementos do vetor 1
n2 (quantidade de elementos no vetor 2)
elementos do vetor 2
Saída:

elementos dos vetores 1 e 2 intercalados em ordem crescente 
(inclua um caractere espaço entre cada elemento, também inclua uma quebra de linha ao final)


Importante: o programa não pode usar colchetes, portanto, será necessário utilizar artimética de ponteiros para acessar os elementos dos vetores. Para alocar os vetores, use malloc.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    
    int n1;
    int n2;
    
    scanf("%d", &n1);
    
    int *v1 = malloc(sizeof(int)*(n1));
    
    for(int i = 0; i < n1; i++){
        scanf("%d", v1+i); 
    }
    
    scanf("%d",&n2);
    
    int *v2 = malloc(sizeof(int)*(n2));
    
    for(int j = 0; j < n2; j++){
        scanf("%d",v2+j); 
    }
   
    int f = (n1)+(n2);
    
    int w = 0, y = 0;
    
    for(int k = 0; k < f;k++){
        
        if( *(v1+w) < *(v2+y) && w < n1){
            printf("%d ", *(v1+w));
            w++;
        }else{
            if(y < n2){
                printf("%d ", *(v2+y));
                y++;
                
            }else{
                printf("%d ", *(v1+w));
                w++;
            }
        }
    }
    
    printf("\n");
 
    free(v1);
    free(v2);
    return 0;
}