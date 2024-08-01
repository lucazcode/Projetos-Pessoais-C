#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(int argc,char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	
	char palavra[N];
	int i;
	
	puts("INVERTA A STRING\n");	
	printf("Digite a palavra: ");
	scanf("%s[N]",&palavra);	
	i=strlen(palavra);
	
	printf("String invertida:");
	
	for(i=strlen(palavra);i>=0;i--){
		printf("%c",palavra[i]);
	}

	return 0;
}

// =)!

