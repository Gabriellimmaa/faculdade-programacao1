#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i, h, p2[45], p3[30];

    for(i=0; i<45; ++i)
        scanf("%i", &p2[i]);
    for(i=0; i<30; ++i)
        scanf("%i", &p3[i]);

    for (h=0; h<45; ++h){
        for(i=0; i<30; ++i){
            if (p3[i] == p2[h])
                printf("%i ", p2[h]);
        }
    }
    printf("\n");
	return 0;
}
