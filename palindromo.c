#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
            
int main(int argc, char const *argv[])
{
    int i, j=0, c;
    char matriz[10], ma[10];
    scanf("%s", matriz);
    for (i = strlen(matriz)-1; i > -1; i--)
    {
        ma[j]=matriz[i];
        j++;
    }
    ma[j] = '\0';
    c = strcmp(ma, matriz);
    if (c == 0)
    {
        printf("é palindromo\n");
    }
    printf("%s\n", matriz);
    printf("%s\n", ma);    
    return 0;
}
