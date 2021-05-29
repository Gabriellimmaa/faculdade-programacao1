#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m, n, f, i, aux=0;
    
    scanf("%d%d%d", &m, &n, &f);
    
    int filaP[m], filaS[n];
    
    for(i=0; i<m; i++){
        scanf("%d", &filaP[i]);
    }
    
    for(i=0; i<n; i++){
        scanf("%d", &filaS[i]);
    }
    
    if(f==1){
        if(m<n){
        for(i=0; i<n; i++){
            if(n>i){
        printf("%d\n", filaS[i]);
            }
            if(m>i){
        printf("%d\n", filaP[i]);
            }
        }
        } else {
            for(i=0; i<m; i++){
            if(n>i){
        printf("%d\n", filaS[i]);
            }
            if(m>i){
        printf("%d\n", filaP[i]);
        }
            }
        }
        
    } else {
        if(m<n){
        for(i=0; i<n; i++){
        if(m>i){
        printf("%d\n", filaP[i]);
        }
        if(n>i){
        printf("%d\n", filaS[i]);
        }
        }
    } else {
        for(i=0; i<m; i++){
        if(m>i){
        printf("%d\n", filaP[i]);
        }
        if(n>i){
        printf("%d\n", filaS[i]);
        }
    }
    }
}
	return 0;
}