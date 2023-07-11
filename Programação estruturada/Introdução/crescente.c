#include <stdio.h>

int main(){
    
    int n,n1,i,cont=0,p=0;
    
    scanf("%d", &n);
    
    for(i=0; i < n; i++){
        
        scanf("%d", &n1);
        
        if (n1 > p){
            cont++;
            p= n1;
        }
    }
        
    
    if (cont == n){
        printf("SIM\n");
    }else{
        printf("NAO\n");
        
    }
    
    return 0;
}