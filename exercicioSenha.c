#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	int senha[5], i=0, aux;
	
	for(aux=5; aux < 5; aux++){
		printf("Digite o %iº digito da senha: \n", i++);
		scanf("%i", &senha[aux]);

	}
	

	senha[0] = senha[0] * 2;
	senha[1] = senha[1] * 3;
	senha[2] = senha[2] * 2;
	senha[3] = senha[3] * 3;
	senha[4] = senha[4] * 2;
		
	printf("A criptografia tornou sua senha mais segura: \n");
	printf("Senha senha criptografada e: %i%i%i%i%i \n", senha[0], senha[1], senha[2], senha[3], senha[4]);
	
	return 0; 
}
