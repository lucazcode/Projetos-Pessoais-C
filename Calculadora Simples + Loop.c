#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    printf("~ CALCULADORA SIMPLES ~\n\n");

    float n1, n2; // Declara as variáveis para armazenar os números
    int escolha; // Declara a variável para armazenar a escolha do usuário
    int op; // Declara a variável para armazenar a operação selecionada
    int loop = 1; // Declara a variável para controle do loop principal, iniciado como 1 (true)
    int loop2 = 1; // Declara a variável para controle do loop interno, iniciado como 1 (true)
    
    void loops(){
        
        while(loop2 == 1){ // Define um loop enquanto "loop2" for igual a 1
            
            printf("\ncalcular novamente? (1 = sim, 2 = não): "); // Pede ao usuário se deseja calcular novamente
            scanf("%d", &escolha); // Atribui a resposta do usuário na variável "escolha"
            fflush(stdin); // Limpa o buffer de entrada
        
            if(escolha == 1 || escolha == 2){ // Se a escolha for 1 ou 2...
                if(escolha == 1){        
                    break; // Se a escolha for 1: quebra o loop interno para repetir o processo
                }   
                else{
                    printf("encerrando.\n"); // Se a escolha for diferente de 1: exibe mensagem de encerramento
                    loop = 0; // Define "loop" como 0, terminando o loop principal
                    break; // Quebra o loop interno
                }
            }
            else{
                printf("escolha inválida, tente novamente.\n"); // Mensagem de erro para escolha inválida
                continue; // Prossegue com o loop interno
            }
        }
    }
    
    float soma(float numA, float numB){ // Define a função "soma" e seus parâmetros
        float resultado = numA + numB; // Calcula a soma dos parâmetros e armazena em "resultado"
        printf("\nresultado: %.2f + %.2f = %.2f", numA, numB, resultado); // Mostra a operação e o resultado final ao usuário
    }
    
    float sub(float numA, float numB){ // Define a função "sub" e seus parâmetros
        float resultado = numA - numB; // Calcula a subtração dos parâmetros e armazena em "resultado"
        printf("\nresultado: %.2f - %.2f = %.2f", numA, numB, resultado); // Mostra a operação e o resultado final ao usuário
    }
    
    float mult(float numA, float numB){ // Define a função "mult" e seus parâmetros
        float resultado = numA * numB; // Calcula a multiplicação dos parâmetros e armazena em "resultado"
        printf("\nresultado: %.2f * %.2f = %.2f", numA, numB, resultado); // Mostra a operação e o resultado final ao usuário
    }
    
    float div(float numA, float numB){ // Define a função "div" e seus parâmetros
        float resultado = numA / numB; // Calcula a divisão dos parâmetros e armazena em "resultado"
        printf("\nresultado: %.2f / %.2f = %.2f", numA, numB, resultado); // Mostra a operação e o resultado final ao usuário
    }
    
    while(loop == 1){ // Loop principal enquanto "loop" for igual a 1
        printf("insira a operação:\n1 = soma\n2 = subtração\n3 = multiplicação\n4 = divisão\n\nnúmero: ");
        scanf("%d", &op); // Atribui a escolha da operação na variável "op"
        fflush(stdin); // Limpa o buffer de entrada
        
        if(op == 1 || op == 2 || op == 3 || op == 4){ // Verifica se a opção é válida
            printf("insira um valor: ");
            scanf("%f", &n1); // Atribui o primeiro valor na variável "n1"
            fflush(stdin); // Limpa o buffer de entrada
            
            printf("insira outro valor: ");
            scanf("%f", &n2); // Atribui o segundo valor na variável "n2"
            fflush(stdin); // Limpa o buffer de entrada
            
            if(op == 1){ // Se a operação selecionada for soma
                soma(n1, n2); // Chama a função de soma
                loops(); // Chama a função que pergunta se deseja calcular novamente
            }
            else if(op == 2){ // Se a operação selecionada for subtração
                sub(n1, n2); // Chama a função de subtração
                loops(); // Chama a função que pergunta se deseja calcular novamente
            }
            else if(op == 3){ // Se a operação selecionada for multiplicação
                mult(n1, n2); // Chama a função de multiplicação
                loops(); // Chama a função que pergunta se deseja calcular novamente
            }
            else if(op == 4){ // Se a operação selecionada for divisão
                div(n1, n2); // Chama a função de divisão
                loops(); // Chama a função que pergunta se deseja calcular novamente
            }
        }
        else{
            printf("ERRO: opção inválida.\n\n"); // Mensagem de erro para opção inválida
            continue; // Prossegue com o loop principal
        }
    }
}

// =)!
