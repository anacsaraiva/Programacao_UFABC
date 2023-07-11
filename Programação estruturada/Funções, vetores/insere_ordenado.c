/*Faça um programa que fique lendo números inteiros positivos:

• Cada número deverá ser inserido ordenado (ordem crescente) em um vetor (assuma que haverá no máximo 100 números).
• Após cada inserção, imprima o vetor completo. O programa encerra quando o usuário digitar o número -1 
(não imprima o vetor após o usuário digitar -1, apenas encerre o programa).*/

#include <stdio.h>

void ordena_vetor(int v[], int tam){
    
    for(int i = 0; i < tam; i++){
        
        for(int j = i;j < tam; j++){
            if(v[i] > v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
}


void imprime_vetor(int v[], int tam){
    
    printf("\n");
    
    for(int i = 0; i < tam; i++){
        
        printf("%d ", v[i]);
    }
}

int main(){
    
    int num, c = 1, vetor[c];

    scanf("%d", &num);
        
    for(int i=0; i < c;i++){
        
        vetor[i]=num;
        
        ordena_vetor(vetor,c);
        
        imprime_vetor(vetor,c);
        
        scanf("%d", &num);
        
        if(num != (-1)){
            c++;
        }
    }
}