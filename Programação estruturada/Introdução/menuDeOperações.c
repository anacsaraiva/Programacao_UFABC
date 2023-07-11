#include <stdio.h>

int main(){
    
    int codigo=1,a=0,b=0,c=0,result=0,menor=0;
    
    while(codigo != 0){
        scanf("%d", &codigo);
        
        if (codigo == 1){
            scanf("%d %d", &a, &b);
            result= a+b;
                
            }
        if (codigo == 2){
            scanf("%d %d %d", &a, &b, &c);
            result= a+b+c;
            
            }
        if (codigo == 3){
            scanf("%d %d", &a, &b);
            result = a*b;
            }
        
        if (menor==0){
            menor = result;
        }else{
            if (result < menor)
            menor = result;
        }
        if(codigo != 0)
            printf("%d\n", result);
        
    }
    printf("%d\n", menor);
}