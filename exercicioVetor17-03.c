/* 
	GABARITO: 
	Q1 = A
	Q2 = C
	Q3 = D
	Q4 = B 
	Q5 = E

*/


#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char questoes[5] = {'a', 'c', 'd', 'b', 'e'}, pontuacao, resposta[5], nome[25], pontos;
	int i;  
	
while(1) {
	pontos=0;
	system("cls");
	puts("Nome do aluno: "); fflush(stdin);
	gets(nome); // recebe o nome completo com espaço 
	
	printf("--- QUESTÕES ---");
	for(i=0; i < 5; i++){
	printf("\nQuestão %iº --- Resposta: ", i+1);
	scanf(" %c", &resposta[i]);	

	if(questoes[i] == resposta[i]) {
		pontos++;
		printf("Acertou");
	} else {
		printf("Errou");
	}

}
	
	pontuacao = pontos * 2;

	printf("\n %s, sua nota final foi: %i \n\n", nome, pontuacao);
	system("pause");
}

	return 0; 
}
