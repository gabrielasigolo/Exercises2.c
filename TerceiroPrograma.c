#include <stdlib.h> //system() 
#include <locale.h> //setlocale()
#include <stdio.h>  //-- standard  input output  - padr�o entrada sa�da

int main( )  
{
	char tecla;   //o teclado e cada caracter dele tem um n�mero
 	//caracter a (97)  � diferente de entrar com o A (65)
	//pode ser o ESC -- o Enter 
	setlocale(LC_ALL, "portuguese");
	printf("\n Pressione qualquer tecla\n");
	scanf("%c", &tecla);
    //       'a'  endere�o de mem�ria F017
    if (tecla == 'a' || tecla == 'A')
	   printf("Pressionou a tecla A ou a");    
	   
	if (tecla == 97) //97 � o a 
		printf("\nPressionou o a min�sculo");
	else
		printf("\nFoi pressionado o %c que � o valor %d", tecla, tecla);
		
	system("pause");  
	return 0;
}

