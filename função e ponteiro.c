#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void troca(int *pa, int *pb);
            
int main( )
{
    int a=5, b=10;
    printf("%d %d\n", a, b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void troca(int *pa, int *pb)
{
    int aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}
