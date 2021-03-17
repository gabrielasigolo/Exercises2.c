#include <stdlib.h> //system() 
#include <locale.h> //setlocale()
#include <stdio.h>  //-- standard  input output  - padrão entrada saída

int main( )  
{
	char tecla;   //o teclado e cada caracter dele tem um número
 	//caracter a (97)  é diferente de entrar com o A (65)
	//pode ser o ESC -- o Enter 
	setlocale(LC_ALL, "portuguese");
	printf("\n Pressione qualquer tecla\n");
	scanf("%c", &tecla);
    //       'a'  endereço de memória F017
    if (tecla == 'a' || tecla == 'A')
	   printf("Pressionou a tecla A ou a");    
	   
	if (tecla == 97) //97 é o a 
		printf("\nPressionou o a minúsculo");
	else
		printf("\nFoi pressionado o %c que é o valor %d", tecla, tecla);
		
	system("pause");  
	return 0;
}

