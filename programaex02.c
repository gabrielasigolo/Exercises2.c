#include <stdlib.h> //system()
#include <locale.h> //setlocale()
#include <stdio.h> // standard input output - padrão entrada saída


int main( )  
{
	char tecla;   //o teclado e cada caracter dele tem um n�mero
 	//caracter a (97)  � diferente de entrar com o A (65)
	//pode ser o ESC -- o Enter 
	setlocale(LC_ALL, "portuguese");

	do // come�a a repeti��o
	{
		printf("\n Pressione qualquer tecla\n");
		tecla = getch();  //ver o getche e o getchar
		
	    if (tecla == 13)
		   printf("\nPressionou o Enter\n");    
		if (tecla == 27) 
			printf("\nPressionou o Esc\n");
		else if (tecla == 'A')
			printf("\nPressionou a tecla A\n");
		else 
			printf("\nFoi pressionado o %c que � o valor %d\n", tecla, tecla);
	} while(tecla != 48); // vai repetir enquanto a tecla for diferente de '0'
			
	system("pause");  
	return 0;
}
