#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *arquivo;
    char ler[20], l;
    int i;
    arquivo = fopen("arquivo.txt", "r+");
    if(arquivo == NULL)
    {
        printf("nao abriu\n");
    }
    i=0;
    l=fgetc(arquivo);
    while (l!=EOF)
    {
        ler[i]=l;
        printf("%c\n", ler[i]);
        i++;
        l=fgetc(arquivo);
    }
    fclose(arquivo);
    return 0;
}
