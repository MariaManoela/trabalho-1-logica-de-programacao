#include<stdio.h>
#include<locale.h>
#define PESO_QUESTAO 0.2
main(){
	setlocale(LC_ALL, "");
	
	char nome[100];
	int acertos;
	float redacao, media;
	
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("\nDigite a quantidade de acertos na prova objetiva: ");
	scanf("%i", &acertos);
	printf("\nDigite sua nota da redação: ");
	scanf("%f", &redacao);
	
	media = (acertos*PESO_QUESTAO)+redacao;
	
	printf("\nNome do candidato: %s", nome);
	printf("\nNota da prova objetiva: %.2f", acertos*PESO_QUESTAO);
	printf("\nNota da prova de redação: %.2f", redacao);
	printf("\nMédia final: %.2f", media);
	
	if (media >= 8.0 && redacao >= 1.0){
		printf("\nAprovado!");
	}else{
		printf("\nReprovado!");
	}
}
