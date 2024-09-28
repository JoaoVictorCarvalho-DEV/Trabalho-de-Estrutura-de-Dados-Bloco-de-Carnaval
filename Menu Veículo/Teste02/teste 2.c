/*
Criando uma lista simplesmente encadeada, com entradas de dados e sem função e imprimindo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM_PLACA 50  // Tamanho máximo da placa
#define TAM_TIPO 50   // Tamanho máximo do tipo de veículo

struct veiculos{
	char tipo[TAM_TIPO];
	char placa[TAM_PLACA];
	struct veiculos *proximoVeiculo;
};

int main(){
	setlocale(LC_ALL, "Portuguese");

	// Criando o veículo 01 (início da lista)
	struct veiculos *inicio = (struct veiculos *)malloc(sizeof(struct veiculos)); // Alocando memória para o primeiro veículo
	printf("\nDigite o tipo de veículo (carro de apoio ou caminhão): ");
	fgets(inicio->tipo, TAM_TIPO, stdin);
	inicio->tipo[strcspn(inicio->tipo, "\n")] = '\0'; // Removendo o caractere de nova linha
	printf("Digite a placa do veículo 01: ");
	fgets(inicio->placa, TAM_PLACA, stdin);
	inicio->placa[strcspn(inicio->placa, "\n")] = '\0'; // Removendo o caractere de nova linha

	inicio->proximoVeiculo = NULL;

	// Criando o veículo 02
	struct veiculos *ponteiroVeiculo1 = (struct veiculos *)malloc(sizeof(struct veiculos));
	printf("\nDigite o tipo de veículo (carro de apoio ou caminhão): ");
	fgets(ponteiroVeiculo1->tipo, TAM_TIPO, stdin);
	ponteiroVeiculo1->tipo[strcspn(ponteiroVeiculo1->tipo, "\n")] = '\0';
	printf("Digite a placa do veículo 02: ");
	fgets(ponteiroVeiculo1->placa, TAM_PLACA, stdin);
	ponteiroVeiculo1->placa[strcspn(ponteiroVeiculo1->placa, "\n")] = '\0';
	ponteiroVeiculo1->proximoVeiculo = NULL;

	// Passar para o próximo nó
	inicio->proximoVeiculo = ponteiroVeiculo1;

	// Criando o veículo 03
	struct veiculos *ponteiroVeiculo2 = (struct veiculos *)malloc(sizeof(struct veiculos));
	printf("\nDigite o tipo de veículo (carro de apoio ou caminhão): ");
	fgets(ponteiroVeiculo2->tipo, TAM_TIPO, stdin);
	ponteiroVeiculo2->tipo[strcspn(ponteiroVeiculo2->tipo, "\n")] = '\0';
	printf("Digite a placa do veículo 03: ");
	fgets(ponteiroVeiculo2->placa, TAM_PLACA, stdin);
	ponteiroVeiculo2->placa[strcspn(ponteiroVeiculo2->placa, "\n")] = '\0';

	ponteiroVeiculo2->proximoVeiculo = NULL;

	// Passar para o próximo nó
	ponteiroVeiculo1->proximoVeiculo = ponteiroVeiculo2;

	// Criando o veículo 04
	struct veiculos *ponteiroVeiculo3 = (struct veiculos *)malloc(sizeof(struct veiculos));
	printf("\nDigite o tipo de veículo (carro de apoio ou caminhão): ");
	fgets(ponteiroVeiculo3->tipo, TAM_TIPO, stdin);
	ponteiroVeiculo3->tipo[strcspn(ponteiroVeiculo3->tipo, "\n")] = '\0';
	printf("Digite a placa do veículo 04: ");
	fgets(ponteiroVeiculo3->placa, TAM_PLACA, stdin);
	ponteiroVeiculo3->placa[strcspn(ponteiroVeiculo3->placa, "\n")] = '\0';

	ponteiroVeiculo3->proximoVeiculo = NULL;

	// Passar para o próximo nó
	ponteiroVeiculo2->proximoVeiculo = ponteiroVeiculo3;

	// Imprimindo
    printf("\nLISTA DE VEÍCULOS\n");
	printf("\nVeículo 01\n");
	printf("Tipo de Veículo: %s\n", inicio->tipo);
	printf("Placa do Veículo: %s\n\n", inicio->placa);

    printf("\nVeículo 02\n");
	printf("Tipo de Veículo: %s\n", ponteiroVeiculo1->tipo);
	printf("Placa do Veículo: %s\n\n", ponteiroVeiculo1->placa);

    printf("\nVeículo 03\n");
	printf("Tipo de Veículo: %s\n", ponteiroVeiculo2->tipo);
	printf("Placa do Veículo: %s\n\n", ponteiroVeiculo2->placa);

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
