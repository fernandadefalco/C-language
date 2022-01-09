#include <string.h>
#include<stdio.h>

main(){
    int x,y,tam;
    char nome[30];

    printf("Insert a word: ");
    gets(nome);


    tam = strlen(nome);
    printf("\nThe word backwards is: ");

    for (x=tam-1; x >= 0; x--)
        printf("%c",nome[x]);
        printf("\n\n");


 system("pause");
 return 0;
}
