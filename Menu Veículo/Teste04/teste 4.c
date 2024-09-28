/*
Criando uma lista simplesmente encadeada, com entradas de dados e sem função e imprimindo
Criando menu
Criando função contar
Criando função imprimir

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM_PLACA 50  // Tamanho máximo da placa
#define TAM_TIPO 50   // Tamanho máximo do tipo de veículo

// Estrutura para armazenar os veículos
struct veiculos{
    char tipo[TAM_TIPO];
    char placa[TAM_PLACA];
    struct veiculos *proximoVeiculo;
};

struct veiculos *primeiroVeiculo = NULL;
void verificarListaVazia();
void contadorVeiculo();
void menuPrimario();
void menuVeiculo();
void adicionarVeiculoInicio();
void imprimirVeiculo();

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {
        system("cls");
        menuPrimario();

        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);
        while (getchar() != '\n'); // limpar o buffer de entrada.

        if (opcao < 0 || opcao > 5) {
            printf("\nA opção digitada é inválida!");
            printf("\nTente novamente.");
            system("pause");
        } else {
            system("cls");
            switch (opcao) {
                case 1: {
                    int opcaoVeiculo;
                    do {
                        system("cls");
                        menuVeiculo();
                        printf("\nDigite a opção desejada: ");
                        scanf("%d", &opcaoVeiculo);
                        while (getchar() != '\n');  // limpar o buffer de entrada.

                        if (opcaoVeiculo < 0 || opcaoVeiculo > 6) {
                            printf("\nA opção digitada é inválida!");
                            printf("\nTente novamente.");
                            system("pause");
                        } else {
                            system("cls");
                            switch (opcaoVeiculo) {
                                case 1:
                                    adicionarVeiculoInicio();
                                    system("pause");
                                    break;
                                case 2:
                                    printf("função a implementar\n");
                                    system("pause");
                                    break;
                                case 3:
                                    printf("função a implementar\n");
                                    system("pause");
                                    break;
                                case 4:
                                    printf("função a implementar\n");
                                    system("pause");
                                    break;
                                case 5:
                                    printf("função a implementar\n");
                                    system("pause");
                                    break;

                                case 6:
                                    imprimirVeiculo();
                                    system("pause");
                                    break;
                            }
                        }
                    } while (opcaoVeiculo != 0);
                    break;
                }
                case 2:
                    printf("função a implementar\n");
                    system("pause");
                    break;
                case 3:
                    imprimirVeiculo();
                    system("pause");
                    break;

            }
        }
    } while (opcao != 0);

    return 0;
}

void menuPrimario() {
    printf("\n************************************************************************\n");
    printf("\n************************* BLOCO DO EU SOZINHO **************************\n");
    printf("\n************************************************************************\n");
    printf("\n1 - Veículos \n");
    printf("2 - Pessoas \n");
    printf("3 - Imprimir \n");
    printf("4 - ??????? \n");
    printf("5 - ??????? \n");
    printf("0 - Sair\n");
}

void menuVeiculo() {
    printf("\n-----------<<< Gerenciamento de Veículos >>>----------- \n");
    printf("\n1 - Adicionar Veículos no início");
    printf("\n2 - Adicionar Veículos no meio");
    printf("\n3 - Adicionar Veículos no final");
    printf("\n4 - Editar Placa de Veículos");
    printf("\n5 - Excluir Veículos");
    printf("\n6 - Exibir Veículos Cadastrados");
    printf("\n0 - Sair");
}

void adicionarVeiculoInicio() {
    // Criando o veículo 01 (início da lista)
    struct veiculos *novoVeiculo = (struct veiculos *)malloc(sizeof(struct veiculos));
    printf("\nDigite o tipo de veículo (carro de apoio ou caminhão): ");
    fgets(novoVeiculo->tipo, TAM_TIPO, stdin);
    novoVeiculo->tipo[strcspn(novoVeiculo->tipo, "\n")] = '\0'; // Removendo o caractere de nova linha
    printf("Digite a placa do veículo 01: ");
    fgets(novoVeiculo->placa, TAM_PLACA, stdin);
    novoVeiculo->placa[strcspn(novoVeiculo->placa, "\n")] = '\0'; // Removendo o caractere de nova linha

    novoVeiculo->proximoVeiculo = NULL;

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
    novoVeiculo->proximoVeiculo = ponteiroVeiculo1;

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
    printf("Tipo de Veículo: %s\n", novoVeiculo->tipo);
    printf("Placa do Veículo: %s\n\n", novoVeiculo->placa);

    printf("\nVeículo 02\n");
    printf("Tipo de Veículo: %s\n", ponteiroVeiculo1->tipo);
    printf("Placa do Veículo: %s\n\n", ponteiroVeiculo1->placa);

    printf("\nVeículo 03\n");
    printf("Tipo de Veículo: %s\n", ponteiroVeiculo2->tipo);
    printf("Placa do Veículo: %s\n\n", ponteiroVeiculo2->placa);


    printf("\nVeículo 04\n");
    printf("Tipo de Veículo: %s\n", ponteiroVeiculo3->tipo);
    printf("Placa do Veículo: %s\n\n", ponteiroVeiculo3->placa);

}
void imprimirVeiculo() {
    int qtdVeiculo = 0;
    if (primeiroVeiculo == NULL){
        printf("A lista de veículos está  vazia! \n");
    }else{
        struct veiculos *ponteiroVeiculo = NULL;
        ponteiroVeiculo = primeiroVeiculo;
        while(ponteiroVeiculo != NULL){
            qtdVeiculo++;
            printf("\nVeículo %d\n", qtdVeiculo);
            printf("Tipo de Veículo: %s\n", ponteiroVeiculo->tipo);
            printf("Placa do Veículo: %s\n\n", ponteiroVeiculo->placa);
            ponteiroVeiculo= ponteiroVeiculo->proximoVeiculo;
        };
        printf("Total de veículos registrados = %d", qtdVeiculo);
    }
}
