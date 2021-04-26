Estruturas Básicas:

	#Comando de Atribuição
		' = '
		variável = 10 ou 'c'   atribui o numero ou a letra, a variavel

	#Variáveis
		locais - só funcionam dentro do main ou função onde foram declaradas
		global - são declaradas fora do main e podem ser chamadas onde for no código
		parâmetros formais - dentro dos parenteses ( da função ) 

	#Dados Numéricos
		Inteiros:  1, -10

		Reais:  3.5, -10.3

	#Dados Alfanuméricos
		"Olá", "meu nome é Fulano", 'c'

	#Dados Booleanos
		Verdadeiro, Falso    true (1), false (0)

	#Expressões Aritméticas
		Operadores:   + - * / % -- ++ soma subtração multiplicação divisão resto decremento incremento
		
	#Operadores	
		Operadores Relacionais:   > >= < <= == != maior/ou igual menor/ou igual igual diferente
		Operadores Lógicos:   && || ! e ou negação
		Operadores de Atribuição:   = += -= *= /= %= atribui soma subtrai multiplica divide resto e atribui

	#Tipos básicos de variaveis
		Inteiro - recebe numeros positivos e negativos
		Float - recebe numeros com casas decimais
		Double - mais recomendado para numeros decimais pois tem precisão dupla
		Char - recebe letras e outros caracteres, algumas vezes usa a biblioteca <string.h>
		Bool - recebe true ou false, mas tem que chamar a biblioteca <stdbool.h>

		int primeiro(void)
		{
			int real = -10;
			float decimal = 1.5;
			double decimal = 1.5;
			char letra = 'a';
			bool boleana = true;
			return 0;
		}

A função principal de C, unica que precisa estar presente é a: MAIN()
		
Para executar algumas funções, como as mais básicas, deve chamar a biblioteca respectiva dessa forma: #INCLUDE <BIBLIOTECA.H>

	#Função Printf
		Comandos de formatação:
				%c   caracter
				%d   inteiro 
				%f   ponto flutuante
				%.3f ponto flutuante com 3 casas decimais
				%lf  ponto flutuante de precisão dupla
				%s   string

	#Função Scanf
		Comandos de leitura:
				%c   caracter
				%d   inteiro 
				%f   ponto flutuante
			    %lf  ponto flutuante de precisão dupla
				%s   string

	#Funções Matemáticas (necessário #include <math.h>)
		ceil()   arredonda pra cima
		cos()    cosseno 
		exp(x)   e elevado a potencia de x
		fabs()   valor absoluto
		floor()  arredonda para baixo
		log()    logaritmo natural
		log10()  logaritmo decimal
		pow(x,y) calcula x elevado a potencia y
		sin()    seno 
		sqrt()   raiz quadrada
		tan()	 tangente

	#Funções de String (necessário #include <string.h>)
		strcpy(destino, origem)    copia da origem para o destino, ou coloca a string no lugar origem dentro da variavel destino
		strcmp(s1, s2)             compara e retorna a ordem  -  -1 = s1 < s2   1 = s1 > s2   0 = s1 == s2
		strlen(string)             retorna tamanho da string
		strcat(s1, s2)             concatena s1 + s2, retorna uma string

	#Estruturas de Decisão
		if (condição verdadeira) {bloco de comando}          -  se 
		else if (condição verdadeira) {bloco de comando}     -  ou se
		else {bloco de comando}                              -  senão
		switch (expressão) {case 8 ou 'c': comando; break;}  -  para cada caso

	#Estruturas de Decisão
		for (inicialização; expressão; operação) {bloco de comando}  -  para ~ repetição contável
		while (condição verdadeira) {bloco de comando}               -  enquanto faça ~ repetição condicional
		do {bloco de comando} while (condição verdadeira)            -  faça enquanto ~ repetição condicional

	#Vetor & Matriz
		tipo vetor[tamanho]
		tipo matriz[linha][coluna]

	#Funções
		tipo_retornado nome_da_função (parâmetros) {bloco da função}

			se declarar uma variavel local com o mesmo nome de uma global, a preferencia vai ser da local

		Declaração (protótipo)         antes do main
			tipo_retornado nome_da_função (declaração de parâmetros);

		Definiçao (código da função)   pode ser antes ou depois do main 
			tipo_retornado nome_da_função (declaração de parâmetros) {bloco da função}

		Ativação (chamada)             dentro do main ou de outra função

		void função(int parâmetros ou *parâmetros ou matrizâmetro[][coluna], int *parâmetro)
		{
			bloco da função que usa parâmetros e *parâmetro e matrizâmetro
			return;
		}
		int main( )
		{
			função(parâmetros1 ou vetor ou matriz, &parâmetro1);   o parâmetros1 pode ser vetor ou matriz sem seus []
			return 0;
		}

	#Parâmetros 


	#Ponteiros
		Declaração: 
			tipo *ponteiro, variavel;   quem envia e quem recebe tem que ser do mesmo tipo

		Passagem:
			ponteiro = &variavel;
			int main(){função(&variavel)} envia o endereço - função(int *ponteiro){bloco da função} recebe o endereço
			int main(){função(vetor)} envia o endereço - função(int *ponteiro){bloco da função} recebe o endereço
			int main(){função(vetor)} envia o endereço - função(int ponteiro[]){bloco da função} recebe o endereço

			Por valor:
				passagem normal, parametros copiados tratados como variaveis locais, execução no modelo de pilha, 
				função acaba variaveis são liberadas e a original nao se altera

			Por referência:
				utiliza ponteiro, o que é passado para o parametro da função é o endereço da memória onde o conteudo
				se encontra, altera o conteudo original dentro da função

		Operações:
			apenas duas podem ser usadas com ponteiro, adição e subtração, p-- e p++, e servem para percorrer o vetor
			já com relação ao conteudo apontado vale todas as operações   (*p)++;     *p = (*p) * 10;
			==  e  !=   para saber se dois ponteiros são iguais ou diferentes
			>, <, >=, <=   para saber qual a posição(endereço) mais alta na memória ocupada por um ponteiro

	#Recursividade
		Chamar a si mesmo, salvando os valores na pilha, até determinado ponto de parada ou ponto sem a recursão
		e retorna fazendo os calculos com os numeros anteriores
		
		int fib(int n)
		{
    		if (n<2)
    		{
        		return n;
    		}
    		else
    		{
        		return (fib(n-1)+fib(n-2));
    		}
		}
		
		int fatorial(int v)
		{
	    	if (v<2)
	    	{
	    	    return 1;
	    	}
	    	else
	    	{
	        	return (v*fatorial(v-1));
	    	}
		}

	#Struct
		Organiza melhor os dados referentes a mesma coisa, sendo chamados nome_struct.nome_variavel
		struct {
			tipo nome_variavel;
		} nome_struct;
	
	#Union
		armazena tipos diferentes no mesmo local de memória, só armazena um por vez para cada 'nome_union', chama igual struct
		union {
			int nome_variavel1;
			float nome_variavel2;
		} nome_union;  (uma ou mais variaveis 'nome_union')

	#Enum
		falta entender e aplicar

	#Arquivos    (já na biblioteca stdio.h)
		FILE *arquivo                                           declarar a variavel ponteiro como  
		arquivo = fopen( nome_do_arquivo, modo_de_abertura)     para manipular precisa abrir usando fopen

				nome_do_arquivo é o caminho onde ele está, pode ser absoluto(direto) ou relativo  -  igual no javascript
				modo_de_abertura é um parâmetro que cada letra designa uma ação, exemplo: 'r' leitura 'r+' leitura e escrita

		fclose(arquivo)                                         é necessário fechar o arquivo ao terminar de usar
		fputc(string, arquivo)									coloca a string no arquivo caracter por caracter
		fgetc(arquivo)											recebe a string do arquivo caracter por caracter, EOF ao final
		feof(arquivo) 											pode substituir o EOF na verificação do final, volta 0 ou 1
		fputs(vetor, arquivo)									coloca o vetor direto dentro do arquivo
		fgets(vetor, 20, arquivo)                               coloca o texto do arquivo do tamanho pedido no vetor
		fwrite(&bloco, numero.de.bytes, total, arquivo)         escreve tudo que esta dentro do vetor no arquivo
			&bloco é o ponteiro do vetor, com ou sem &
			numero.de.bytes é pra saber o tamanho de cada posição do vetor sizeof(char, ou int ou...)
			total é o tamanho do conteudo do vetor que vai ser gravado strlen(bloco) 
			arquivo é o local onde sera salvo
		fread(&bloco, numero.de.bytes, total, arquivo)			utiliza os mesmos parâmetros do fwrite mas pra leitura
		fseek(arquivo, numero.de.bytes, tipo)					posiciona a leitura em determinado ponto do arquivo
			arquivo éo local de onde será lido
			numero.de.bytes é pra saber a partir de onde iniciará a leitura, total de bytes a ser pulado
			tipo é de onde ocorrerá a leitura, a partir de qual ponto pulará a quantidade de bytes, SEEK_SET início, SEEK_CUR meio, SEEK_END fim												