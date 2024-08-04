#include <stdio.h>
#include <locale.h>

float soma(float soma1,float soma2);
float sub(float sub1,float sub2);
float mult(float mult1,float mult2);
float divi(float divi,float divi2);
int conta();

int main(){
	setlocale(LC_ALL,"Portuguese");
	conta();
}

float soma(float soma1,float soma2){ // Define a fun��o "soma"
	return soma1+soma2; // Retorna a soma dos par�metros
}

float sub(float sub1,float sub2){ // Define a fun��o "sub"
	return sub1-sub2; // Retorna a subtra��o dos par�metros
}

float mult(float mult1,float mult2){ // Define a fun��o "mult" 
	return mult1*mult2; // Retorna a multiplica��o dos par�metros
}

float divi(float divi1,float divi2){ // Define a fun��o "divi"
	return divi1/divi2; // Retorna a divis�o dos par�metros
}

int conta(){ // Define a fun��o "conta"
	while(1){ // Inicializa um loop
		system("cls"); // Limpa o terminal
		system("color 07"); // Define a cor do fundo preto e textos brancos
	
		int op=0; // Inicializa a vari�vel "op" como 0
		float n1=0,n2=0; // Inicializa as vari�veis "n1" e "n2" como 0
		
		puts("Operadores: (1)+ (2)- (3)* (4)/ (5)Sair"); // Exibe as op��es dispon�veis
		printf("Selecione um operador: ");
		scanf("%d",&op); // Atribui a entrada do usu�rio para a vari�vel "op"
		fflush(stdin); // Limpa o buffer do teclado
		
		if(op==1||op==2||op==3||op==4||op==5){ // Se "op" == 1, 2, 3, 4 ou 5...
			if(op==5){ // Se "op" == 5
				system("cls"); // Limpa o terminal
				printf("Encerrando programa.");
				break; // Quebra o loop, encerrando o programa
			}
			
			system("cls"); // Limpa o terminal
			printf("Insira o primeiro n�mero: ");
			scanf("%f",&n1); // Atribui a entrada do usu�rio para a vari�vel "n1"
			fflush(stdin); // Limpa o buffer do teclado
			printf("Insira o segundo n�mero: ");
			scanf("%f",&n2); // Atribui a entrada do usu�rio para a vari�vel "n2"
			fflush(stdin); // Limpa o buffer do teclado
			system("cls"); // Limpa o terminal
			
			if(op==1){ // Se "op" == 1
				printf("%.2f + %.2f = %.2f\n",n1,n2,soma(n1,n2)); // Formata os n�meros escolhidos e o resultado da soma
				system("pause"); // Pausa o programa antes de continuar o loop
				continue; // Continua o loop
			}
			if(op==2){ // Se "op" == 2
				printf("%.2f - %.2f = %.2f\n",n1,n2,sub(n1,n2)); // Formata os n�meros escolhidos e o resultado da subtra��o
				system("pause"); // Pausa o programa antes de continuar o loop
				continue; // Continua o loop
			}
			if(op==3){ // Se "op" == 3
				printf("%.2f * %.2f = %.2f\n",n1,n2,mult(n1,n2)); // Formata os n�meros escolhidos e o resultado da multiplica��o
				system("pause"); // Pausa o programa antes de continuar o loop
				continue; // Continua o loop
			}
			if(op==4){ // Se "op" == 4
				if(n2==0){ // Se o divisor == 0
					system("color 04"); // Define a cor do texto para vermelho
					puts("N�o � poss�vel dividir por 0."); // Exibe mensagem de erro
				}
				else{
					printf("%.2f / %.2f = %.2f\n",n1,n2,divi(n1,n2)); // Formata os n�meros escolhidos e o resultado da divis�o	
				}
				system("pause"); // Pausa o programa antes de continuar o loop
				continue; // Continua o loop
			}
		}
		else{ // Se "op" != 1, 2, 3, 4 ou 5...
			system("cls"); // Limpa o terminal
			system("color 04"); // Define a cor do texto para vermelho
			puts("Operador inv�lido, insira novamente."); // Exibe mensagem de erro
			system("pause"); // Pausa o programa antes de continuar
			continue; // Continua o loop
		}
	}
	
	return 0;
}

// =)!
