#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{				//		0   1   2    3   4 					//       0   1  2  3  4 
	char gabarito[5]= {'a','a','a', 'b','c'} ,  respostaAluno[5]; // 'a' 'b'
	   // 10 linhas x 25 colunas  -- matriz tem l e c
	char nome[3] [25]; 
	int i, acertos=0, nota[3], aluno;
	setlocale(LC_ALL, "portuguese");
	
for (aluno =0; aluno< 3; aluno++) //controla a entrada do aluno
{
	system("cls");
	puts("Nome do aluno...: "); 
	fflush(stdin); gets(nome[aluno]);
	
	acertos=0;	
		for (i= 0; i< 5; i++) //controla as respostas do aluno
		{
			printf("\nQual a sua resposta a %ia questão? ", i+1);
			scanf(" %c", &respostaAluno[i]);
			if (respostaAluno[i] == gabarito[i])
			{
			   acertos++;
			   printf("\nAcertou %i questão ", acertos);
			}
			else
				printf("\nErrou a questão");
		}
		//fim da verificação das respostas do aluno
	nota[aluno] = acertos * 2;
	printf("\nA nota do %s é %i \n\n", nome, nota[aluno]);
	system("pause");
} //fim da entrada

printf("\n\n Relatório das notas");
for (aluno=0; aluno<3; aluno++)
{
	printf("\n Aluno %s teve Nota %i ", nome[aluno], nota[aluno]);
}

 printf("\nFim da correção da prova\n\n");
 system("pause");	
 return 0;	
}
