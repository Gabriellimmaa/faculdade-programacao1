#include <stdio.h>
#include <stdlib.h>

int funcao(int n) {
	if(n == 0) {
		printf("%d ", 0);
		return 0;
	}
	if(n % 2 == 0) {
		printf("%d ", n);
	}
	funcao(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    funcao(n);
}
