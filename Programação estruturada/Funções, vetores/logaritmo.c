/* Implemente a função logaritmo, que recebe um valor x e um valor n. 
A função deve calcular o valor de ln(x) usando n termos da série Maclaurin*/

//#include "logaritmo.h"

double logaritmo(double x, int n) {
    
    double x_real = x - 1.0;
    double ln = 0.0; 
    double l = 1.0;
    
    for(int i = 1; i <= n; i++){
        
        if( i % 2 == 0){
            ln -= x_real*(1/l);
            l++;
        }else{
            ln += x_real*(1/l);
            l++;
        }
        x_real *=(x-1.0);
        
      
        }
    
    return ln;

}