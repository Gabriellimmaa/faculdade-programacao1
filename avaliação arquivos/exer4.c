#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter_string() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        inverter_string();
        printf("%c", c);
    }
}

int main()
{
    printf("Digite uma frase: ");
    inverter_string();
    return 0;
}

