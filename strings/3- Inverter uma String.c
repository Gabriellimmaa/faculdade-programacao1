#include<stdio.h>
#include<string.h>

main()

{
    
    char str1[255],str2[255];
    int cont1,cont2;
    
    scanf("%s", &str1);
    
    cont2 = strlen(str1) - 1 ;
    
    for(cont1 = 0; cont1 < strlen(str1);cont1++) {
        str2[cont2] = str1[cont1];
        cont2--;
    }
    str2[cont1] = '\0';
    printf("%s\n",str2);
} 
