#include <stdio.h>
#include <stdlib.h>

int funcao(int n) {
	if(n < 0) {
		return 0;
	}
	2 + funcao(n - 2);
	printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    funcao(n);
}
