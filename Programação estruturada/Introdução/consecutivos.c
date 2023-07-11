/*Implemente um programa que lê um inteiro positivo n, e verifique se n é igual ao produto de 3 números inteiros consecutivos. 
Por exemplo, 120 atende ao critério, pois 4x5x6 = 120. Se atender, imprima "SIM", caso contrário, imprima "NAO".*/

#include <stdio.h>

int main(){
    
    int n,result = 0,a = 0,sim = 0;
    
    scanf("%d", &n);
    
    do{
        a++;
        
        result = a * (a+1) * (a+2);
        
        if(result==n){
            sim++;
        }
    }while(result <= n);
    
    if (sim > 0){
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }
}