/* Fa�a um programa que calcule a m�dia de idade de 5 alunos. 
As idades devem ser armazenadas e mostradas ao final junto com a m�dia. 
Tamb�m deve ser calculado o percentual de alunos que tem mais de 50 anos.

const int tam = 10 // n�o muda o valor at� o final do c�digo 
#define TAM 5 // substitui todos TAM do cod. por 5 

*/

#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	int idade[5], i, aux=0, idade1, cont=0;
	float media, porcent; 
	
	for(i=0; i < 5; i++){
		printf("Digite sua idade: ");
		scanf("%i", &idade[i]);
	}
	
	for(i=0; i < 5; i++){      //                        37        27       21
		aux = aux + idade[i]; // vari�vel acumulado -  0 + 37   37 + 27  64 + 21 
	}
	
	media = aux / 5; 
	
	printf("IDADES: ");
	
	for(i=0; i < 5; i++){
		printf("\n%i", idade[i]);
	}
	
	for (i=0; i < 5; i++) {
	if(idade[i] > 50) {
		cont++; // vari�vel contadora 
	}
}
	
	porcent = (float)cont / 5.0 * 100.0; 
	
	/* 
		5 / 2 --> 2 
		5.0 / 2 --> 2.0
	
	*/
	
	printf("\nA porcentagem das pessoas com mais de 50 ser�: %.2f %%", porcent); 
	printf("\nA m�dia das idades ser�: %.2f", media);
	
	
	
	return 0; 
}
