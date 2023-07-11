/* Faça um programa que leia uma frase (no máximo 100 caracteres) e imprima a quantidade de palavras na frase lida. */

#include <stdio.h>

int main(){
    
    int cont=1,i=0;
    char frase[100];
    fgets(frase,100,stdin);
    
    while(frase[i] != '\0'){
        
        if(frase[i]== ' '){
            cont++;
            i++;
        }else{
            i++;
        }
    }
    printf("%d", cont);
}