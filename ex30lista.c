#include <stdio.h>
#include <string.h>
#define TAM 25

int main (){
char fruta[TAM];
	int vogais=0, i;

	puts("Insira o nome de uma fruta: ");
	gets(fruta);
	
	for(i = 0; i < TAM; i++){
		if (strchr(fruta[i], 'a')) {
			vogais++;
		}
		
		if (strchr(fruta[i], 'e')) {
			vogais++;
		}
		
		if (strchr(fruta[i], 'i')) {
			vogais++;
		}
		
		if (strchr(fruta[i], 'o')) {
			vogais++;
		}
		
		if (strchr(fruta[i], 'u')) {
			vogais++;
		}
}
		
		
	printf("Total de vogais: %i ", vogais);
	
return 0;
}
