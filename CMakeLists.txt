cmake_minimum_required(VERSION 3.29)
project(Trabalho_de_Estrutura_de_Dados_Bloco_de_Carnaval C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories("Menu Veículo")

add_executable(Trabalho_de_Estrutura_de_Dados_Bloco_de_Carnaval
    "Menu Veículo/Teste01/teste 1.c"
    "Menu Veículo/Teste02/teste 2.c"
    "Menu Veículo/Teste03/teste 3.c"
    "Menu Veículo/Teste04/teste 4.c"
    "Menu Veículo/Teste05/teste5.c"
    "Menu Veículo/Teste06/teste6.c"
    "Menu Veículo/Teste07/teste7.c"
    "Menu Veículo/Teste08/teste8.c"
    "Menu Veículo/Teste09/teste9.c"
    "Menu Veículo/Teste10/teste10.c")
