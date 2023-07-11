#include <stdio.h>

int main (){
    
    int n, i;

    scanf("%d", &n);
    
    float num=0, menor=0,maior=0,soma=0 ,media=0;
    
    for( i = 0; i < n;i++) {
        
        scanf("%f", &num);
        
        soma += num;
        
        if (i==0){
        maior = num;
        menor = num;
        
        }else {
            if (num < menor){
                menor = num;
                }
            if (num > maior){
                maior = num;
                }
            }
        }
        
    media=soma/n;
    
    printf("%.2f\n",menor);
    printf("%.2f\n",maior);
    printf("%.2f\n",media);
    return 0;
}