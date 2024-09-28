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
void imprimirVeiculo(struct veiculos *primeiroVeiculo);

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
                                    printf("função a implementar\n");
                                    imprimirVeiculo(primeiroVeiculo);
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
                    imprimirVeiculo(primeiroVeiculo);
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
    // ponteiro para armazenar as novas ionformaçõpes do veículo
    printf("\n-----------<<< Adicionar Veículo no Início >>>----------- \n");
    struct veiculos *novoVeiculo = (struct veiculos *) malloc(sizeof(struct veiculos));
    printf("\nDigite o tipo de veículo (carro de apoio ou caminhão): ");
    fgets(novoVeiculo->tipo, TAM_TIPO, stdin);
    novoVeiculo->tipo[strcspn(novoVeiculo->tipo, "\n")] = '\0';
    printf("Digite a placa do veículo: ");
    fgets(novoVeiculo->placa, TAM_PLACA, stdin);
    novoVeiculo->placa[strcspn(novoVeiculo->placa, "\n")] = '\0';

    novoVeiculo->proximoVeiculo = primeiroVeiculo;
    primeiroVeiculo = novoVeiculo;
}

void imprimirVeiculo(struct veiculos *primeiroVeiculo) {
    printf("\n-----------<<< Lista de Veículos >>>----------- \n");
    int qtdVeiculo = 0;
    if (primeiroVeiculo == NULL){
        printf("A lista de veículos está  vazia! \n");
    }else{
        struct veiculos *ponteiroVeiculo = primeiroVeiculo;
        while(ponteiroVeiculo != NULL){
            qtdVeiculo++;
            printf("\nVeículo %d\n", qtdVeiculo);
            printf("Tipo de Veículo: %s\n", ponteiroVeiculo->tipo);
            printf("Placa do Veículo: %s\n\n", ponteiroVeiculo->placa);
            ponteiroVeiculo= ponteiroVeiculo->proximoVeiculo;
        };
        printf("Total de veículos registrados = %d\n", qtdVeiculo);
    }
}

