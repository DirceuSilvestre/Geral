#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define S 6

//Insere os números na ordem que quiser, e o código altera a ordem, colocando e trás pra frente dentro do mesmo vetor
            
int main(int argc, char const *argv[])
{
    int a[S], b, c;
    for (int i = 0; i < S; ++i)
    {
        scanf("%d", &a[i]); 
    }
    c = S-1;
    for (int i = 0; i < (S/2); ++i)
    {
        a[i] += a[c];
        a[c] = a[i] - a[c];
        a[i] -= a[c];
        c--;
    }
    for (int i = 0; i < S; ++i)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

//Código acima direto e código abaixo com função

void troca(int v[])
{
    int c = S-1;
    for (int i = 0; i < (S/2); ++i)
    {
        v[i] += v[c];
        v[c] = v[i] - v[c];
        v[i] -= v[c];
        c--;
    }
}
            
int main(int argc, char const *argv[])
{
    int a[S], c;
    for (int i = 0; i < S; ++i)
    {
        scanf("%d", &a[i]); 
    }
    troca(a);
    for (int i = 0; i < S; ++i)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
