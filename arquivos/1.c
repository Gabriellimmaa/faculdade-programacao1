#include <stdio.h>

main() {
 FILE *fp;
 char c;
 int n = 0;
 if ((fp=fopen ("texto.txt","r")) != NULL) {
    while( (c=fgetc(fp)) !=EOF) {
        n = n + 1;
    }
    fclose(fp);
}
printf("O arquivo tem %d caracteres\n", n);
}
