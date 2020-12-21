#include <stdio.h>
#include <stdbool.h>

//Estrutura básica: comando de atribuição '='
//variavel = 10 atraibui o numero ou 'c' a letra a variavel

int primeiro(void)
{
	int variavel = 10;
	printf("%d\n", variavel);	
	return 0;
}

//Tipos básicos de variaveis
//Inteiro - recebe numeros positivos e negativos
//Float - recebe numeros com casas decimais
//Double - mais recomendado para numeros decimais
//Char - recebe letras e outros caracteres
//Bool - recebe true ou false, mas tem que chamar a biblioteca <stdbool.h>

int segundo(void)
{
	int real = -10;
	float decimal = 1.5;
	char letra = 'a';
	bool boleana = true;
	return 0;
}

//Estrutura de decisão Ou Estrutura de desvio
//If - se
//Else-if - continuação do se
//Else - senao
//Switch Case - para cada caso 

int quarto(void)
{
	int numero = 10;
	if (numero < 10)
	{
		printf("numero e menor que 10\n");
	}
	else if (numero == 10)
	{
		printf("numero e 10\n");
	}
	else
	{
		printf("numero e maior que 10\n");
	}
	switch (numero)
	{
		case 8: 
			printf("digitou numero 8 \n");
		    break;
		case 9: 
			printf("digitou numero 9\n");
			break;
		case 10:
			printf("digitou numero 10\n");
			break;
		default:
			printf("digitou opcao invalida\n");
			break;
	}
	return 0;
}

//Estrutura de repetição
//Repetição contável - For para
//Repetição condicional - While enquanto
// Do While - Faça enquanto

int quinto(void)
{
	int numero = 10;
	for (int i = 0; i < 10; i++)
	{
		numero++;
	}
	while (numero == 10)
	{
		//faça o que estiver no bloco de comando (aqui)
		break; //ou altera a variavel pra sair do  loop
	}
	do 
	{
		//faça o que esta aqui depois verifique o while
	} while (numero == 10);
	return 0;
}

//Vetor e Matriz
//vetor é uma variavel que guarda varias informações, tipo nome [tamanho]
//matriz é um conjunto de vetores, for dentro do for, tipo nome [tamanholinha][tamanhocoluna]

int sexto()
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
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

//Funções

void soma(int a, int b)
{
    int resultado;
    resultado = a+b;
    return (resultado);
}

int main()
{
    int num, num2 ,num3;
    scanf("%d %d", &num, &num2);
    num3 = soma(num, num2);
    printf("%d\n", num3);
    return 0;
} 

//Ponteiros

int main()
{
    int a, *b, c;
    scanf("%d", &a);
    b = &a; //b recebe o endereço de memória onde esta o valor que foi guardado em a
    c = *b; //c recebe o valor que está no endereço de memória apontado por b
    printf("%d, %d\n", a, c);
    return 0;
}

//Recursividade








