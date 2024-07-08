#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	printf("~ CALCULADORA SIMPLES ~\n\n");

	float n1, n2;
	int escolha;
	int op;
	int loop = 1;
	int loop2 = 1;
	
	void loops(){
		
		while(loop2==1){
				
			printf("\ncalcular novamente? (1 = sim, 2 = não): ");
		    	scanf("%d", &escolha);
		    	fflush(stdin);
		
			if(escolha==1||escolha==2){	
				if(escolha==1){		
					break;
				}	
				
				else{
					printf("encerrando.\n");
					loop=0;
					break;
				}
			}
				
			else{
				printf("escolha inválida, tente novamente.\n");
				continue;		
			}
		}
	}
	
	float soma(float numA, float numB){	
		float resultado = numA + numB;
		printf("\nresultado: %.2f + %.2f = %.2f", numA, numB, resultado);
		return resultado;
		}
		
	float sub(float numA, float numB){
		float resultado = numA - numB;
		printf("\nresultado: %.2f - %.2f = %.2f", numA, numB, resultado);
		return resultado;
	}
	
	float mult(float numA, float numB){
		float resultado = numA * numB;
		printf("\nresultado: %.2f * %.2f = %.2f", numA, numB, resultado);
		return resultado;
	}
	
	float div(float numA, float numB){
		float resultado = numA / numB;
		printf("\nresultado: %.2f / %.2f = %.2f", numA, numB, resultado);
		return resultado;
	}
	
	while(loop==1){
		printf("insira a operação:\n1 = soma\n2 = subtração\n3 = multiplicação\n4 = divisão\n\nnúmero: ");
		scanf("%d", &op);
		fflush(stdin);
		
		if(op==1||op==2||op==3||op==4){
			printf("insira um valor: ");
			scanf("%f", &n1);
			fflush(stdin);
			
			printf("insira outro valor: ");
			scanf("%f", &n2);
			fflush(stdin);
			
			if(op==1){
				soma(n1, n2);
				loops();
			}
			
			else if(op==2){
				sub(n1, n2);
				loops();
			}
			
			else if(op==3){
				mult(n1, n2);
				loops();
			}
			
			else if(op==4){
				div(n1, n2);
				loops();
			}
		}
		
		else{
			printf("ERRO: opção inválida.\n\n");
			continue;
		}
	}
}


