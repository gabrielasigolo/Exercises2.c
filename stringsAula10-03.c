#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // contem funções string -- strcmp(), strlen()

int main () {
	
	char texto[20];
	
	printf("Informe seu texto: ");
	scanf(" %s", texto);
	
	printf("O texto digitado foi: %s", texto);
	
	printf("\nInforme seu texto: ");
	fflush(stdin);
	gets(texto);
	puts(texto);
	
	printf("O texto digitado foi: %s", texto);
	printf("\nO texto tem %i caracteres", strlen(texto));
	
	
	
	
	return 0; 
}
