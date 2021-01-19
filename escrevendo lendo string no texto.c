#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main( )
{
    FILE *arquivo;
    char ler[50], l, escrever[50];
    int i;
    arquivo = fopen("arquivo.txt", "r+");
    if(arquivo == NULL)
    {
        printf("nao abriu\n");
    }
    else
    {
        scanf("%s", escrever);
        fwrite(&escrever, sizeof(char), strlen(escrever), arquivo);
        fclose(arquivo);
        arquivo = fopen("arquivo.txt", "r+");
        fread(&ler, sizeof(char), strlen(escrever), arquivo);
        printf("%s\n", ler);
    }
    fclose(arquivo);
    return 0;
}
