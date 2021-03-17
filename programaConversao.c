#include <stdlib.h> //system()
#include <locale.h> //setlocale()
#include <stdio.h> // standard input output - padrÃ£o entrada saÃ­da
#include <ctype.h> //funções de conversão toupper (maiúsculo) tolower(minúsculo)


int main( )  
{
	char tecla;   //o teclado e cada caracter dele tem um número
 	//caracter a (97)  é diferente de entrar com o A (65)
	//pode ser o ESC -- o Enter 
	setlocale(LC_ALL, "portuguese");

	do{
	printf("\nPressione uma tecla: \n");
	tecla = getche();
	printf("\n O caracter em maiúsculo é %c", toupper(tecla));
	
	printf("\nO caracter em minúsculo é %c", tolower(tecla));
	} while (tecla != 27); //diferente de ESC
	
			
	system("pause");  
	return 0;
}
