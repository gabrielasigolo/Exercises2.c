#include <stdlib.h> //system()
#include <locale.h> //setlocale()
#include <stdio.h> // standard input output - padrão entrada saída
#include <ctype.h> //fun��es de convers�o toupper (mai�sculo) tolower(min�sculo)


int main( )  
{
	char tecla;   //o teclado e cada caracter dele tem um n�mero
 	//caracter a (97)  � diferente de entrar com o A (65)
	//pode ser o ESC -- o Enter 
	setlocale(LC_ALL, "portuguese");

	do{
	printf("\nPressione uma tecla: \n");
	tecla = getche();
	printf("\n O caracter em mai�sculo � %c", toupper(tecla));
	
	printf("\nO caracter em min�sculo � %c", tolower(tecla));
	} while (tecla != 27); //diferente de ESC
	
			
	system("pause");  
	return 0;
}
