#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
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


/*
int main(int argc, char const *argv[])
{
    int q, m, *count;
    m = 100;
    *count = m;
    printf("%d\n", *count); //funciona mas da erro, porque?
    return 0;
}

/*
int main()
{
    int vetor[3];
    for (int i = 0; i < 3; ++i)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 3; ++i)
    {
        printf("%d\n", vetor[i]);
    }
    int matriz[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("-%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// register

/* pwr(register int m, register int e)
{
    register int temp;

    temp = 1;

    for (; e; e--)
    {
        temp = temp * m;
    }
    return temp;
}

 main(int argc, char const *argv[])
{
    int a, b, resultado;
    scanf("%d %d", &a, &b);
    resultado = pwr(a,b);
    printf("%d\n", resultado);
    return 0;
}*/

// static

/* aula()
{
    static int teste;
    teste = teste + 5;
    return (teste);
}
 main()
{
    int resultado;
    resultado = aula();
    printf("%d\n", resultado);
    return 0;
}*/

