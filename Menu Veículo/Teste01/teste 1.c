/*
Criando uma lista simplesmente encadeada sem função e imprimindo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM_PLACA 10  // Tamanho máximo da placa
#define TAM_TIPO 20   // Tamanho máximo do tipo de veículo

struct veiculos{
	char tipo[TAM_TIPO];     // Utilizando a constante TAM_TIPO
	char placa[TAM_PLACA];   // Utilizando a constante TAM_PLACA
	struct veiculos *proximoVeiculo;
};

int main(){
	setlocale(LC_ALL, "Portuguese");

	// Criando o veículo 01 (início da lista)
	struct veiculos *inicio = NULL;
	inicio = (struct veiculos *)malloc(sizeof(struct veiculos));
	strcpy(inicio->tipo, "Caminhao");
    strcpy(inicio->placa, "PKA0205");
	inicio->proximoVeiculo = NULL;

	printf("\nVeículo 01\n");
	printf("Tipo de Veículo: %s\n", inicio->tipo);
	printf("Placa do Veículo: %s\n\n", inicio->placa);

	// Criando o veículo 02
	struct veiculos *ponteiroVeiculo1 = (struct veiculos *)malloc(sizeof(struct veiculos));
	strcpy(ponteiroVeiculo1->tipo, "Carro de Apoio");
	strcpy(ponteiroVeiculo1->placa, "OLB9878");
	ponteiroVeiculo1->proximoVeiculo = NULL;

	inicio->proximoVeiculo = ponteiroVeiculo1;

	printf("\nVeículo 02\n");
	printf("Tipo de Veículo: %s\n", ponteiroVeiculo1->tipo);
	printf("Placa do Veículo: %s\n\n", ponteiroVeiculo1->placa);

	// Criando o veículo 03
	struct veiculos *ponteiroVeiculo2 = (struct veiculos *)malloc(sizeof(struct veiculos));
	strcpy(ponteiroVeiculo2->tipo, "Carro de Apoio");
	strcpy(ponteiroVeiculo2->placa, "DEF1234");
	ponteiroVeiculo2->proximoVeiculo = NULL;

	ponteiroVeiculo1->proximoVeiculo = ponteiroVeiculo2;

	printf("\nVeículo 03\n");
	printf("Tipo de Veículo: %s\n", ponteiroVeiculo2->tipo);
	printf("Placa do Veículo: %s\n\n", ponteiroVeiculo2->placa);

	// Criando o veículo 04
	struct veiculos *ponteiroVeiculo3 = (struct veiculos *)malloc(sizeof(struct veiculos));
	strcpy(ponteiroVeiculo3->tipo, "Carro de Apoio");
	strcpy(ponteiroVeiculo3->placa, "ELF5678");
	ponteiroVeiculo3->proximoVeiculo = NULL;

	ponteiroVeiculo2->proximoVeiculo = ponteiroVeiculo3;

	printf("\nVeículo 04\n");
	printf("Tipo de Veículo: %s\n", ponteiroVeiculo3->tipo);
	printf("Placa do Veículo: %s\n\n", ponteiroVeiculo3->placa);

	// Liberando memória
	free(ponteiroVeiculo3);  // Liberando memória do veículo 04
	free(ponteiroVeiculo2);  // Liberando memória do veículo 03
	free(ponteiroVeiculo1);  // Liberando memória do veículo 02
	free(inicio);  // Liberando memória do veículo 01

	return 0;
}

