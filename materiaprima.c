/*  	Fa�a um programa que receba a quantidade de mat�ria prima
		que possue para produ��o das pe�as
		e de acordo com essa quantidade inicie a produ��o de pe�as.

*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>


int main () {
	setlocale(LC_ALL, "Portuguese"); 
	textcolor4(RED);
	
	int materia_prima, i, a; 
	
	printf("Digite a quantidade de mat�ria prima: "); 
	scanf("%i", &materia_prima); 
	
	if(materia_prima <= 0){
		printf("Por favor insira um valor valido!!");
		
		return 0;
	}
	
	for(i=0; i <= materia_prima; i++) {
		printf("%i pe�as produzidas\n", a);
		a++;
	}
	
	
	
	return 0; 
	
}
