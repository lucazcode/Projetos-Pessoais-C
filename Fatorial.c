#include <stdio.h>
#include <locale.h>

int main(int argc,char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	
	int NUM; // Número a se multiplicar
	int NUM_antes; // Número a se multiplicar antes do cálculo
	int i; // Número pelo qual se multiplicar

	puts("CALCULADOR DE FATORIAL\n");
	
	printf("Digite um número para calcular: ");
	scanf("%d", &NUM); // Atribui a entrada do usuário a variável "NUM"
	
	for(i=(NUM-1); i>0; i--){ // Define o valor inicial do índice como i = NUM menos 1, confere se é menor do que 0, executa o for loop e subtrai o índice "i" em 1
		NUM_antes = NUM; // Define NUM_antes com o valor de NUM, antes do cálculo
		NUM = NUM*i; // Define NUM como NUM multiplicado pelo índice "i"
		printf("\n%d x %d = %d", NUM_antes, i, NUM); // Formata os dados para o usuário	
	};
	
	printf("\n\nresultado: %d", NUM); // Formata o resultado final para o usuário

	return 0;
}

// =)!
