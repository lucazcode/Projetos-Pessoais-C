#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int NUM;
	int NUM_antes;
	int i;

	puts("CALCULADOR DE FATORIAL\n");
	
	printf("Digite um número para calcular: ");
	scanf("%d", &NUM);
	
	for(i=(NUM-1); i>0; i--){
		NUM_antes = NUM;
		NUM = NUM*i;
		printf("\n%d x %d = %d", NUM_antes, i, NUM);	
	};
	
	printf("\n\nresultado: %d", NUM);

	return 0;
}

// =)!

