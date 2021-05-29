#include <stdio.h>
#include <stdlib.h>

int funcao(int n1, int n2) {
	if( n2 == 0) {
		printf("%d", n1);
	}
	funcao(n2, n1 % n2);
}

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    funcao(x, y);
}
