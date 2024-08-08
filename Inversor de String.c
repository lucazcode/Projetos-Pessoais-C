#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(int argc,char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	
	char palavra[N]; // Define uma variável char com tamanho N
	int i; // Define uma variável int
	
	printf("Digite a palavra: ");
	scanf("%[^/n]",palavra); // Recebe um dado em string do usuário com limite N	
	
	printf("String invertida:");
	i=strlen(palavra); // Define i como a quantidade de caracteres da palavra
	
	for(i=strlen(palavra)-1;i>=0;i--){ // Inicializa i na última posição da string, enquanto i for maior ou igual a 0 (primeira posição de string)...
		printf("%c",palavra[i]); // Formate a letra da palavra de acordo com a posição de i
	} // Subtraia i em 1

	return 0;
}

// =)!
