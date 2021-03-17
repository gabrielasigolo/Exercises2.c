#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char questoes[5] = {'a', 'c', 'd', 'b', 'e'}, resposta[5], nome [10] [25];
	int i, pontos, pontuacao, aluno, nota[3];  
	
for(aluno=0; aluno < 3; aluno++) 
{
	
	system("cls");
	puts("Nome do aluno: "); fflush(stdin);
	gets(nome[aluno]); // recebe o nome completo com espaço 
	
	pontos=0;
	printf("--- QUESTÕES ---");
	for(i=0; i < 5; i++)
	{
		printf("\nQuestão %iº --- Resposta: ", i+1);
		scanf(" %c", &resposta[i]);	

	if(questoes[i] == resposta[i]) 
	{	
		pontos++;
		printf("Acertou");
	} 
	else 
	{
		printf("Errou");
	}

}
	
	pontuacao = pontos * 2;

	printf("\n %s, sua nota final foi: %i \n\n", nome, pontuacao);
	system("pause");
}

	printf("\n Os nomes dos alunos %s %s %s", nome[0], nome[1], nome[2]);

	return 0; 
}
