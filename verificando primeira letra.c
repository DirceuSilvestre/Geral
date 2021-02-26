#include <stdio.h> 
#include <stdlib.h>

//Algoritmo maiúsculo ou minúsculo

int main(void)
{
    int a;
    char vetor[6];
    scanf("%s", vetor);
        a = vetor[0] - 'a';
        if (a < 0)
        {
            printf("É maiúsculo\n");
        }
        else
        {
            printf("É minúsculo\n");
        }
    return 0;
}
