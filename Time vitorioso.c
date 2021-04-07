#include <stdio.h>

int main()
{
    int times, i, j, x, maiorpontos = 0, pontos = 0;
    char entrada[20], maior[20];
    scanf("%d", &times);
    for(i = 0; i < times; i++)
    {
        scanf("%s", entrada);
        pontos = 0;
        for(j = 0; entrada[j] != '\0'; j++)
        {
            if(entrada[j] == 'v' || entrada[j] == 'V')
            {
                pontos += 3;
            }
            if(entrada[j] == 'e' || entrada[j] == 'E')
            {
                pontos += 1;
            }
        }
        if(pontos > maiorpontos)
        {
            maiorpontos = pontos;
            for(x = 0; entrada[x] != '\0'; x++)
            {
              maior[x] = entrada[x];
            }
        }
    }
    printf("O time que ganhou teve %d pontos com %s nos seus jogos\n", maiorpontos, maior);
    return 0;
}
