/*  	Faça um programa que receba a quantidade de matéria prima
		que possue para produção das peças
		e de acordo com essa quantidade inicie a produção de peças.

*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>


int main () {
	setlocale(LC_ALL, "Portuguese"); 
	textcolor4(RED);
	
	int materia_prima, i, a; 
	
	printf("Digite a quantidade de matéria prima: "); 
	scanf("%i", &materia_prima); 
	
	if(materia_prima <= 0){
		printf("Por favor insira um valor valido!!");
		
		return 0;
	}
	
	for(i=0; i <= materia_prima; i++) {
		printf("%i peças produzidas\n", a);
		a++;
	}
	
	
	
	return 0; 
	
}
