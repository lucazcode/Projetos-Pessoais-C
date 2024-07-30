#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

float maior_menor(float num1, float num2, bool *iguais){ // Declara a função com 3 parâmetros
	if(num1 > num2){ // Se o par.1 > par.2, declare false para "iguais", retorne o par.1.
		*iguais = false;
		return num1;
	}
	else if(num2 > num1){ // Se o par.2 > par.1, declare false para "iguais", retorne o par.2.
		*iguais = false;
		return num2;
	}
	else{ // Se os parâmetros forem iguais, declare true para "iguais", retorne o valor 0.0
		*iguais = true;
		return 0.0;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, y; // Declara x e y
	bool iguais; // Declara o valor booleano
	
	puts("CONFERIR NÚMERO MAIOR\n");
	
	printf("Digite o primeiro número: "); // Guarda o valor de x
	scanf("%f", &x);
	
	printf("\nDigite o segundo número: "); // Guarda o valor de y
	scanf("%f", &y);
	
	float res = maior_menor(x, y, &iguais); // Define "res" como a chamada da função "maior_menor" utilizando x e y nos parâmetros num1 e num2
	
	if (iguais){ // Se "iguais" retornar true, mostre esta mensagem
		printf("\nOs números são iguais.");
	}
	else { // se "iguais" retornar false, mostre esta mensagem
		printf("\nO maior número é: %.2f.", res);
	}
	
	return 0;
}

// =)!
