#include <stdio.h>

int main (){
    
    int n1, n2,cont =0,div;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    int i,j;
    
    for(i = n1 ; i <= n2; i++ ){
        div = 0;
        for (j=1; j <= i; j++){
            
            if (i%j == 0){
                div++;
                }
            }
            if(div==2){
                cont++;
            }
        }

    printf("%d", cont);
    return 0;
}