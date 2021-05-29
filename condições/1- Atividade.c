#include <stdio.h>

int main(){
    int n, m, cont;
    scanf("%d %d", &n, &m);
    cont = 0;
    for (n = n; n <= m; ++n)
    {
        if(n%5==0){
            if(cont == 0){
            printf("%d", n);
            cont = 1;
            }
            else{
            printf("|%d", n);
            }
        }
    }
	return 0;
}
